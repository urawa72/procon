use proconio::{input, fastout};
use std::cmp::{min};

#[fastout]
fn main() {
    input! {
        x: isize,
        k: isize,
        d: isize
    }

    // 全部正で考えて問題ない
    let x = x.abs();
    // 残り移動回数
    let a = k - min(x / d, k);
    // 移動回数*距離を引く
    let b = x - (min(x / d, k) * d);
    // 偶数だったら+-0, 奇数の場合は1回分移動
    if a % 2 == 0 {
        println!("{}", b.abs());
    }else{
        println!("{}", (b - d).abs());
    }

}
