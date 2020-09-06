use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        a: [usize; n],
    }

    let mut ans = 0;
    let mut pre = a[0];
    for t in a {
        if t < pre {
            ans += pre - t;
        } else {
            pre = t;
        }
    }

    println!("{}", ans);
}
