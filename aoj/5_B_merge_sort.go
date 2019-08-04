package main

import (
  "bufio"
  "fmt"
  "strconv"
  "strings"
  "os"
)

var inf = 1 << 32
var cnt = 0

func nextInt(sc *bufio.Scanner) int {
  sc.Scan()
  num, err := strconv.Atoi(sc.Text())
  if err != nil {
    panic(err)
  }
  return num
}

func output(a []int) []string {
  s := make([]string, len(a))
  for i := 0; i < len(a); i++ {
    s[i] = strconv.Itoa(a[i])
  }
  return s
}

func mergeSort(S []int, left, right int) {
  if left + 1 < right {
    // 確認用標準出力
    // cnt++
    mid := (left + right) / 2
    // 確認用標準出力
    // fmt.Printf("分割 %v left:%d mid:%d right:%d cnt:%d\n", S, left, mid, right, cnt)
    mergeSort(S, left, mid)
    mergeSort(S, mid, right)
    merge(S, left, mid, right)
  // } else {
  // 確認用標準出力
  //   fmt.Printf("分割おわり cnt:%d\n", cnt)
  }
}

func merge(S []int, left, mid, right int) {
  n1 := mid - left
  n2 := right - mid

  // 分割されたスライスを作成
  L := make([]int, n1 + 1)
  for i := 0; i < n1; i++ {
    L[i] = S[left + i]
  }
  R := make([]int, n2 + 1)
  for i := 0; i < n2; i++ {
    R[i] = S[mid + i]
  }

  // 番兵を用意
  L[n1] = inf
  R[n2] = inf

  // 確認用標準出力
  // fmt.Printf("マージ left:%d mid:%d right:%d L:%v R:%v\n", left, mid, right, L, R )

  // 分割された2スライスをマージ
  var i, j int
  for k := left; k < right; k++ {
    cnt++
    if L[i] <= R[j] {
      S[k] = L[i]
      i++
    } else {
      S[k] = R[j]
      j++
    }
  }
}


func main() {
  sc := bufio.NewScanner(os.Stdin)
  sc.Split(bufio.ScanWords)
  n := nextInt(sc)
  S := make([]int, n)
  for i := 0; i < n; i++ {
    S[i] = nextInt(sc)
  }

  mergeSort(S, 0, n)
  result := output(S)
  fmt.Println(strings.Join(result, " "))
  fmt.Println(cnt)
}

