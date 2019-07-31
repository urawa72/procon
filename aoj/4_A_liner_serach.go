package main

import (
  "fmt"
)

func main() {
  var n, q int
  fmt.Scan(&n)
  S := make([]string, n)
  for i := 0; i < n; i++ {
    fmt.Scan(&S[i])
  }
  fmt.Scan(&q)
  T := make([]string, q)
  for i := 0; i < q; i++ {
    fmt.Scan(&T[i])
  }

  // 探索
  cnt := 0
  for _, t := range T {
    for _, s := range S {
      if t == s {
        cnt++
        break
      }
    }
  }
  fmt.Println(cnt)
}

