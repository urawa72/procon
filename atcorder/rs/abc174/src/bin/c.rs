use proconio::{fastout, input};
use std::*;

#[allow(dead_code)]
#[fastout]
fn main() {
    input! {
        k: usize
    }
    let mut a = vec![0; k + 1];
    // 漸化式で7,77,777...の数列に対してmod k = 0になるか
    // mod kなのでたかだかkまで調べれば良い
    a[1] = 7 % k;
    for i in 2..k + 1 {
        a[i] = (a[i - 1] * 10 + 7) % k;
    }
    for i in 1..k + 1 {
        if a[i] == 0 {
            println!("{}", i);
            return;
        }
    }
    println!("-1");
}
