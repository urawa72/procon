package main

import (
  "bufio"
  "fmt"
  "os"
  "strconv"
  "strings"
)

func main() {
  a, n, k := prepare()
  b := countingSort(a, n, k)
  fmt.Println(strings.Trim(fmt.Sprint(b), "[]"))
}

func prepare() ([]int, int, int) {
  sc := bufio.NewScanner(os.Stdin)
  sc.Split(bufio.ScanWords)
  sc.Scan()
  n, _ := strconv.Atoi(sc.Text())
  a := make([]int, n)
  k := 0
  for i := 0; i < n; i++ {
    sc.Scan()
    a[i], _ = strconv.Atoi(sc.Text())
    if a[i] > k {
      k = a[i]
    }
  }
  return a, n, k
}

func countingSort(a []int, n, k int) []int {
  c := make([]int, k+1)
  for i := 0; i < n; i++ {
    c[a[i]]++
  }
  for i := 1; i <= k; i++ {
    c[i] = c[i] + c[i-1]
  }
  b := make([]int, n)
  for i := n-1; i >= 0; i-- {
    b[c[a[i]]-1] = a[i]
    c[a[i]]--
  }
  return b
}

