package main

import (
  "bufio"
  "fmt"
  "os"
  "strconv"
  "strings"
)

func output(a *[]int) {
  str := ""
  for _, e := range *a {
    str += fmt.Sprintf("%d ", e)
  }
  str = strings.TrimRight(str, " ")
  fmt.Println(str)
}

type Node struct {
  key int
  prev, next *Node
}

// 番兵ノードを空初期化
func initHead(n *Node) {
  // 初期値はprev/nextともに自分自身をさしておく
  n.prev = n
  n.next = n
}

// 新規ノードを先頭に追加
func insert(k int) {
  next := head.next
  n := new(Node)
  n.key = k
  // 新規ノードのnextにhead.next(= 追加前の先頭ノード)のポインタを設定
  n.next = next
  // 新規ノードのprevは常にheadノードのポインタ
  n.prev = &head
  // headノードのnextに新規ノードのポインタを設定
  head.next = n
  // 新規ノード追加前の先頭ノードのprevに新規ノードのポインタを設定(ずらす処理)
  next.prev = n
}

// 先頭から探して一番最初に存在するkeyを削除
func delete(k int) {
  // pがheadノードをさしたら終了
  for p := head.next; p != &head; p = p.next {
    if p.key == k {
      del(p)
      return
    }
  }
}

// 先頭ノードを削除
func deleteFirst() {
  if head.next == &head {
    return
  }
  del(head.next)
}

// 末尾ノードを削除
func deleteLast() {
  if head.prev == &head {
    return
  }
  del(head.prev)
}

// 実削除処理
func del(p *Node) {
  // 削除対象ノードの前後ポインタを入れ替え
  next := p.next
  prev := p.prev
  prev.next = next
  next.prev = prev
}

var sc = bufio.NewScanner(os.Stdin)
var head Node
func main() {
  initHead(&head)
  var n int
  fmt.Scan(&n)

  sc := bufio.NewScanner(os.Stdin)
  sc.Split(bufio.ScanWords)
  var cmd string
  for i := 0; i < n; i++ {
     sc.Scan()
     cmd = sc.Text()
     switch cmd {
      case "insert":
        sc.Scan()
        key, _ := strconv.Atoi(sc.Text())
        insert(key)
      case "delete":
        sc.Scan()
        key, _ := strconv.Atoi(sc.Text())
        delete(key)
      case "deleteFirst":
        deleteFirst()
      case "deleteLast":
        deleteLast()
     }
  }

  // これだとMLE
  // str := ""
  // for n := head.next; n != &head; n = n.next {
  //   str += fmt.Sprintf("%d ", n.key)
  // }
  // str = strings.TrimRight(str, " ")
  // fmt.Println(str)

  w := bufio.NewWriter(os.Stdout)
  for n := head.next; n != &head; n = n.next {
    if n != head.next {
      fmt.Fprintf(w, " ")
    }
    fmt.Fprintf(w, "%d", n.key)
  }
  fmt.Fprintf(w, "\n")
  w.Flush()
}

