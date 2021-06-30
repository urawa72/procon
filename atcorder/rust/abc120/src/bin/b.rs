use std::cmp::min;

use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
      a: usize,
      b: usize,
      k: usize,
    };

    let mut cnt = 0;
    for i in (1..=min(a, b)).rev() {
        if a % i == 0 && b % i == 0 {
            cnt += 1;
            if k == cnt {
                println!("{}", i);
                break;
            }
        }
    }
}
