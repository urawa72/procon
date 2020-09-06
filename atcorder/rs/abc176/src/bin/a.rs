use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        n: usize,
        x: usize,
        t: usize,
    }

    let a = (n + (x - 1)) / x;
    println!("{}", a * t);
}
