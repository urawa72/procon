use proconio::{fastout, input};
use std::cmp::min;

#[fastout]
fn main() {
    input! {
      s: String,
    };

    let a = s.match_indices("0").count();
    let b = s.match_indices("1").count();

    println!("{}", min(a, b) * 2);
}
