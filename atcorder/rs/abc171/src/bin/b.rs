use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        n: isize,
        k: isize,
        mut p: [isize; n]
    }

    p.sort();

    let mut ans = 0;
    for i in 0..k {
        ans += p[(i as usize)];
    }
    println!("{}", ans);
}
