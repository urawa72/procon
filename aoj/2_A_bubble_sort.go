package main

import "fmt"
import "strings"

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

  flag := 1
  count := 0
  for flag == 1 {
    flag = 0
    for i := (n - 1); i >= 0; i-- {
      j := i - 1
      if j >= 0 && a[i] < a[j] {
        tmp := a[i]
        a[i] = a[j]
        a[j] = tmp
        flag = 1
        count += 1
      }
    }
    if flag == 0 {
      break
    }
  }
  output(&a)
  fmt.Println(count)
}

