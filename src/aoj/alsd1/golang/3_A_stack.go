package main

import (
  "bufio"
  "fmt"
  "os"
  "strings"
  "strconv"
)

func scanArgs() (args []string) {
  sc := bufio.NewScanner(os.Stdin)
  sc.Scan()
  str := sc.Text()
  args = strings.Split(str, " ")
  return
}

func push(x int) {
  top++
  stack[top] = x
}

func pop() int {
  top--
  return stack[top + 1]
}

// グローバル変数
var stack [100]int
var top int
func main() {
  // 前置インクリメントないので-1からスタート
  top = -1
  args := scanArgs()
  for _, e := range args {
    n, err := strconv.Atoi(e)
    // errあれば演算子
    if err != nil {
      switch e {
      case "+":
        a := pop()
        b := pop()
        push(b + a)
      case "-":
        a := pop()
        b := pop()
        push(b - a)
      case "*":
        a := pop()
        b := pop()
        push(b * a)
      }
    } else {
      push(n)
    }
  }
  fmt.Println(pop())
}

// pop・pushではなくGoの基本的なスライス操作関数で処理
// func main() {
//   args := scanArgs()
//   var stack []int
//   for _, e := range args {
//     n, err := strconv.Atoi(e)
//     // errあれば演算子
//     if err != nil {
//       var tmp []int
//       // 後ろから2要素取り出して一時配列にセット・削除する
//       for i := 0; i < 2; i++ {
//         num := stack[len(stack) - 1]
//         tmp = append(tmp, num)
//         stack = stack[:len(stack) - 1]
//       }
//       // 取り出した要素を演算してスタックに追加
//       switch e {
//       case "+":
//         stack = append(stack, tmp[1] + tmp[0])
//       case "-":
//         stack = append(stack, tmp[1] - tmp[0])
//       case "*":
//         stack = append(stack, tmp[1] * tmp[0])
//       }
//     } else {
//       stack = append(stack, n)
//     }
//   }
//   fmt.Println(stack[0])
// }

