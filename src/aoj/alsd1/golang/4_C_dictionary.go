package main

import (
  "bufio"
  "fmt"
  "os"
  "strconv"
  "strings"
)

// mapを使って実装
// TODO: オープンハッシュ法で実装
func main() {
  sc := bufio.NewScanner(os.Stdin)
  sc.Scan()
  n, _ := strconv.Atoi(sc.Text())

  dic := make(map[string]int)
  for i := 0; i < n; i++ {
    sc.Scan()
    a := strings.Split(sc.Text(), " ")
    switch a[0] {
    case "insert":
      dic[a[1]] = 1
    default:
      if _, ok := dic[a[1]]; ok {
        fmt.Println("yes")
      } else {
        fmt.Println("no")
      }
    }
  }
}
