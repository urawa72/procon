use proconio::{fastout, input};
use std::cmp::max;

#[fastout]
fn main() {
    input! {
        n: usize,
        m: usize,
        k: isize,
        a: [isize; n],
        b: [isize; m]
    }

    // 累積和
    let mut av: Vec<isize> = vec![0; n + 1];
    for i in 0..n {
        av[i + 1] = a[i] + av[i];
    }
    let mut bv: Vec<isize> = vec![0; m + 1];
    for i in 0..m {
        bv[i + 1] = b[i] + bv[i];
    }

    // avを固定して全探索
    let mut ans = 0;
    let mut j = m;
    for i in 0..=n {
        if av[i] > k {
            break;
        }
        while av[i] + bv[j] > k {
            j -= 1;
        }
        ans = max(ans, i + j);
    }
    println!("{}", ans);
}
