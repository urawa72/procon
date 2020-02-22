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
    str += fmt.Sprintf("%d ",e)
  }
  str = strings.TrimRight(str, " ")
  fmt.Println(str)
}

// 挿入ソート
func main() {
  var n int
  fmt.Scan(&n)
  a := scanNums(n)
  output(&a)

  for i := 1; i < n; i++ {
    v := a[i]
    j := i - 1
    for j >= 0 && a[j] > v {
      a[j + 1] = a[j]
      j--
      a[j + 1] = v
    }
    output(&a)
  }
}

