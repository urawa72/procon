package main

import (
  "bufio"
  "fmt"
  "os"
  "strconv"
)

func nextInt(sc *bufio.Scanner) int {
  sc.Scan()
  num, err := strconv.Atoi(sc.Text())
  if err != nil {
    panic(err)
  }
  return num
}

func binarySearch(t int, S []int) int {
  r := len(S)
  l := 0
  for r >= l {
    m := (l + r) / 2
    v := S[m]
    switch {
    case v == t:
      return 1
    case v < t:
      l = m + 1
    case v > t:
      r = m - 1
    }
  }
  return -1
}

func main() {
  sc := bufio.NewScanner(os.Stdin)
  sc.Split(bufio.ScanWords)
  n := nextInt(sc)
  S := make([]int, n)
  for i := range S {
    S[i] = nextInt(sc)
  }
  q := nextInt(sc)
  T := make([]int, q)
  for i := range T {
    T[i] = nextInt(sc)
  }

  cnt := 0
  // 二分探索
  for _, t := range T {
    if binarySearch(t, S) >= 0 {
      cnt++
    }
  }
  fmt.Println(cnt)
}

