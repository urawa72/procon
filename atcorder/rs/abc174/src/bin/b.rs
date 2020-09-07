use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        n: isize,
        d: isize,
        v: [(isize, isize); n]
    }

    let mut ans = 0;
    for (x, y) in v {
        if (x * x + y * y) <= d * d {
            ans += 1;
        }
    }
    println!("{}", ans);
}
