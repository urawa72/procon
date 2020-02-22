package main

import (
  "bufio"
  "fmt"
  "os"
  "strconv"
  "strings"
)

func nextInt(sc *bufio.Scanner) int {
  sc.Scan()
  num, err := strconv.Atoi(sc.Text())
  if err != nil {
    panic(err)
  }
  return num
}

func output(a []int, q int) []string {
  s := make([]string, len(a))
  for i := 0; i < len(a); i++ {
    if i == q {
      s[i] = "[" + strconv.Itoa(a[i]) + "]"
    } else {
      s[i] = strconv.Itoa(a[i])
    }
  }
  return s
}

func partition(A []int, p, r int) int {
  x := A[r]
  i := p - 1
  for j := p; j < r; j++ {
    if A[j] <= x {
      i++
      tmp := A[i]
      A[i] = A[j]
      A[j] = tmp
    }
  }
  tmp := A[i + 1]
  A[i + 1] = A[r]
  A[r] = tmp
  return i + 1
}

func main() {
  sc := bufio.NewScanner(os.Stdin)
  sc.Split(bufio.ScanWords)
  n := nextInt(sc)
  A := make([]int, n)
  for i, _ := range A {
    A[i] = nextInt(sc)
  }
  q := partition(A, 0, n - 1)
  result := output(A, q)
  fmt.Println(strings.Join(result, " "))
}

