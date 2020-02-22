package main

import (
  "bufio"
  "fmt"
  "os"
  "strconv"
)

type card struct {
  alp string
  num int
}
type cards []card

func main() {
  n, originArray, A := prepare()
  quickSort(A, 0, n - 1)
  mergeSort(originArray, 0, n)
  // クイックソートとマージソートの結果を比較して安定か判定
  result := isStable(originArray, A, n)
  output(result, A)
}

func prepare() (int, cards, cards) {
  sc := bufio.NewScanner(os.Stdin)
  sc.Split(bufio.ScanWords)
  sc.Scan()
  n, _ := strconv.Atoi(sc.Text())
  originArray, A := scanCards(sc, n)
  return n, originArray, A
}

func scanCards(sc *bufio.Scanner, len int) (cards, cards) {
  A := make(cards, len)
  B := make(cards, len)
  for i := 0; i < len; i++ {
    sc.Scan()
    a := sc.Text()
    sc.Scan()
    n, _ := strconv.Atoi(sc.Text())
    c1 := card { alp: a, num: n, }
    A[i], B[i] = c1, c1
  }
  return A, B
}

func partition(A cards, p, r int) int {
  x := A[r]
  i := p - 1
  for j := p; j < r; j++ {
    if A[j].num <= x.num {
      i++
      A[j], A[i] = A[i], A[j]
    }
  }
  A[i + 1], A[r] = A[r], A[i + 1]
  return i + 1
}

func quickSort(A cards, p, r int) {
  if p < r {
    q := partition(A, p, r)
    quickSort(A, p, q - 1)
    quickSort(A, q + 1, r)
  }
}

func mergeSort(S cards, left, right int) {
  if left + 1 < right {
    mid := (left + right) / 2
    mergeSort(S, left, mid)
    mergeSort(S, mid, right)
    merge(S, left, mid, right)
  }
}

func merge(S cards, left, mid, right int) {
  n1 := mid - left
  n2 := right - mid

  L := make(cards, n1 + 1)
  for i := 0; i < n1; i++ {
    L[i] = S[left + i]
  }
  R := make(cards, n2 + 1)
  for i := 0; i < n2; i++ {
    R[i] = S[mid + i]
  }

  L[n1] = card { alp: "-", num: 1 << 30, }
  R[n2] = card { alp: "-", num: 1 << 30, }

  var i, j int
  for k := left; k < right; k++ {
    if L[i].num <= R[j].num {
      S[k] = L[i]
      i++
    } else {
      S[k] = R[j]
      j++
    }
  }
}

func isStable(o cards, c cards, n int) (result string) {
  result = "Stable"
  for i := 0; i < n; i++ {
    if o[i].alp != c[i].alp {
      result = "Not stable"
      break
    }
  }
  return
}

func output(result string, A cards) {
  fmt.Println(result)
  w := bufio.NewWriter(os.Stdout)
  for _, e := range A {
    fmt.Fprintf(w, "%s %d\n", e.alp, e.num)
  }
  fmt.Fprintf(w, "")
  w.Flush()
}

