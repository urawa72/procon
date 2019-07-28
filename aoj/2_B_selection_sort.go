package main

import (
  "fmt"
  "strings"
)

func scanNums(len int) (nums []int) {
  var num int
  for i := 0; i < len; i++ {
    fmt.Scan(&num)
    nums = append(nums, num)
  }
  return
}

func output(a *[]int) {
  str := ""
  for _, e := range *a {
    str += fmt.Sprintf("%d ", e)
  }
  str = strings.TrimRight(str, " ")
  fmt.Println(str)
}

func main() {
  var n int
  fmt.Scan(&n)
  a := scanNums(n)

  count := 0
  for i := 0; i < n; i++ {
    minj := i
    for j := i; j < n; j++ {
      if a[j] < a[minj] {
        minj = j
      }
    }
    if minj != i {
      tmp := a[minj]
      a[minj] = a[i]
      a[i] = tmp
      count++
    }
  }
  output(&a)
  fmt.Println(count)
}
