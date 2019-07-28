package main

import (
  "fmt"
  "strings"
  "strconv"
  // "reflect"
)

// カードの構造体
type Card struct {
  Alph string
  Num  int
}
type Cards []Card

// カード読み込み
func scanCards(len int) (cards Cards) {
  var tmp string
  for i := 0; i < len; i++ {
    fmt.Scanf("%s", &tmp)
    // 2文字目をintに変換する
    // Atoiはstatusを返すの_で無視する
    num, _ := strconv.Atoi(tmp[1:])
    card := Card {
      Alph: tmp[0:1],
      Num: num,
    }
    cards = append(cards, card)
  }
  return
}

// バブルソート
func bubbleSort(a Cards, n *int) {
  for i := 0; i < *n; i++ {
    for j := (*n - 1); j >= (i + 1); j-- {
      if a[j].Num < a[j - 1].Num {
        tmp := a[j - 1]
        a[j - 1] = a[j]
        a[j] = tmp
      }
    }
  }
}

// 選択ソート
func selectSort(a Cards, n *int) {
  for i := 0; i < *n; i++ {
    minj := i
    for j := i; j < *n; j++ {
      if a[j].Num < a[minj].Num {
        minj = j
      }
    }
    if minj != i {
      tmp := a[minj]
      a[minj] = a[i]
      a[i] = tmp
    }
  }
}

// 安定性判定
// バブルソートは常に安定なのでバブルソートの結果と比較すればO(n)で済む
func isStable(o Cards, c Cards, n *int) (stableFlg string) {
  stableFlg = "Stable"
  for i := 0; i < *n; i++ {
    for j := (i + 1); j < *n; j++ {
      // 同じ数字の要素だけ判定する
      if o[i].Num == o[j].Num {
        for a := 0; a < *n; a++ {
          for b := (a + 1); b < *n; b++ {
            // b,aの添え字の順でソートされていたら不安定
            if o[i] == c[b] && o[j] == c[a] {
              stableFlg = "Not stable"
              break
            }
          }
        }
      }
    }
  }
  return
}

func output(a Cards) {
  str := ""
  for _, e := range a {
    s := e.Alph + strconv.Itoa(e.Num)
    str += fmt.Sprintf("%s ", s)
  }
  str = strings.TrimRight(str, " ")
  fmt.Println(str)
}

func main() {
  var n int
  fmt.Scan(&n)
  originArray := scanCards(n)

  // deep copy バブルソート
  a := make(Cards, len(originArray))
  copy(a, originArray)
  bubbleSort(a, &n)
  output(a)
  fmt.Println(isStable(originArray, a, &n))
  // バブルソートは常に安定
  // fmt.Println("Stable")

  // deep copy 選択ソート
  b := make(Cards, len(originArray))
  copy(b, originArray)
  selectSort(b, &n)
  output(b)
  fmt.Println(isStable(originArray, b, &n))
  // 選択ソートはバブルソートの結果と同じなら安定
  // if reflect.DeepEqual(originArray, b) {
  //   fmt.Println("Stable")
  // } else {
  //   fmt.Println("Not stable")
  // }
}

