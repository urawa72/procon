package main

import (
  "bufio"
  "fmt"
  "os"
  "strconv"
)

// 標準入力から読み込み
// fmt.ScanだとTLE
func scanNums(len *int) (nums []int) {
  sc := bufio.NewScanner(os.Stdin)
  for i := 0; i < *len; i++ {
    sc.Scan()
    n, _ := strconv.Atoi(sc.Text())
    nums = append(nums, n)
  }
  return
}

// gの間隔をあけた挿入ソート
func insertionSort(nums []int, n int, g int) (cnt int) {
  for i := g; i < n; i++ {
    v := nums[i]
    j := i - g
    for j >= 0 && nums[j] > v {
      nums[j + g] = nums[j]
      j = j - g
      cnt++
    }
    nums[j + g] = v
  }
  return cnt
}

// シェルソート
func shellSort(nums []int, n *int) (m int, g []int, cnt int) {
  for i := 1;; {
    if i > *n {
      break
    }
    g = append(g, i)
    i = 3*i + 1
  }
  m = len(g)

  for i := len(g) - 1; i >= 0; i-- {
    cnt += insertionSort(nums, *n, g[i])
  }
  return
}

func main() {
  var n int
  fmt.Scan(&n)
  nums := make([]int, n, 1000000)
  nums = scanNums(&n)

  // ソート
  m, g, cnt := shellSort(nums, &n)

  // m, g, cnt出力
  fmt.Println(m)
  for i := len(g) - 1; i >= 0; i-- {
    fmt.Print(g[i])
    fmt.Print(" ")
  }
  fmt.Print("\n")
  fmt.Println(cnt)

  // ソート結果を出力
  for i := 0; i < n; i++ {
    fmt.Println(nums[i])
  }
}
