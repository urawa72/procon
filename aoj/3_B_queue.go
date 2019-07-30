package main

import (
  "bufio"
  "fmt"
  "os"
  "strings"
  "strconv"
)

// プロセス構造体
type Process struct {
  Name string
  Time int
}
type Processes []Process

// プロセス読み込み
var sc = bufio.NewScanner(os.Stdin)
func scanArgs() (p Process) {
  sc.Scan()
  str := sc.Text()
  args := strings.Split(str, " ")
  time, _ := strconv.Atoi(args[1])
  p = Process {
    Name: args[0],
    Time: time,
  }
  return
}

func enqueue(p Process) {
  // 末尾に要素を追加する
  queue = append(queue, p)
}

func dequeue() (p Process) {
  // 先頭を取り出して削除
  p = queue[0]
  queue = queue[1:]
  return
}

// グローバル変数
var queue Processes
var n int
var qt int
// リングバッファではない実装
func main() {
  fmt.Scan(&n)
  fmt.Scan(&qt)
  for i := 0; i < n; i++ {
    queue = append(queue, scanArgs())
  }

  var cnt = 0
  var amount = 0
  for cnt < n {
    q := dequeue()
    // q処理しても終了しない 残時間残して次
    if q.Time > qt {
      amount += qt
      q.Time -= qt
      enqueue(q)
    // q以下処理処理して終了する 終了して次
    } else {
      amount += q.Time
      // q.Time = 0
      fmt.Println(q.Name + " " + strconv.Itoa(amount))
      cnt += 1
    }
  }
}

