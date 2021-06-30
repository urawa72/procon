use std::cmp::min;

use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
      a: usize,
      b: usize,
      c: usize,
    };

    let ans = min(b / a, c);
    println!("{}", ans);
}
