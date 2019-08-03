package main

import (
  "bufio"
  "fmt"
  "os"
  "strconv"
)

func scanNums(n int) (nums []int) {
  sc := bufio.NewScanner(os.Stdin)
  sc.Split(bufio.ScanWords)
  for i := 0; i < n; i++ {
    sc.Scan()
    num, _ := strconv.Atoi(sc.Text())
    nums = append(nums, num)
  }
  return
}

func nextInt(sc *bufio.Scanner) int {
  sc.Scan()
  num, err := strconv.Atoi(sc.Text())
  if err != nil {
    panic(err)
  }
  return num
}

func solve(i int, m int) bool {
  if m == 0 { return true }
  if i >= n { return false }
  res := solve(i + 1, m) || solve(i + 1, m - A[i])
  return res
}

// グローバル変数
var n int
var A []int)
func main() {
  sc := bufio.NewScanner(os.Stdin)
  sc.Split(bufio.ScanWords)
  n = nextInt(sc)
  for i := 0; i < n; i++ {
    A[i] = nextInt(sc)
  }
  q := nextInt(sc)

  for i := 0; i < q; i++ {
    m := nextInt(sc)
    res := solve(0, m)
    if res {
      fmt.Println("yes")
    } else {
      fmt.Println("no")
    }
  }
}

