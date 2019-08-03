package main

import (
  "fmt"
  "math"
)

type Point struct {
  x float64
  y float64
}

func koch(n int, a, b Point) {
  if n == 0 {
    return
  }

  var s, t, u Point
  // 度からラジアンに変換
  th := math.Pi * 60.0 / 180.0

  // 1:2, 2:1に内分する点の座標を求める
  s.x = (2 * a.x + 1 * b.x) / 3.0
  s.y = (2 * a.y + 1 * b.y) / 3.0
  t.x = (1 * a.x + 2 * b.x) / 3.0
  t.y = (1 * a.y + 2 * b.y) / 3.0

  // 点uの座標を求めるベクトル演算
  u.x = (t.x - s.x) * math.Cos(th) - (t.y - s.y) * math.Sin(th) + s.x
  u.y = (t.x - s.x) * math.Sin(th) + (t.y - s.y) * math.Cos(th) + s.y

  koch(n - 1, a, s)
  fmt.Printf("%.8f %.8f\n", s.x, s.y)
  koch(n - 1, s, u)
  fmt.Printf("%.8f %.8f\n", u.x, u.y)
  koch(n - 1, u, t)
  fmt.Printf("%.8f %.8f\n", t.x, t.y)
  koch(n - 1, t, b)
}

func main() {
  var n int
  fmt.Scan(&n)

  var a, b Point
  a.x = 0
  a.y = 0
  b.x = 100
  b.y = 0

  fmt.Printf("%.8f %.8f\n", a.x, a.y)
  koch(n, a, b)
  fmt.Printf("%.8f %.8f\n", b.x, b.y)
}

