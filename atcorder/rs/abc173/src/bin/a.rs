use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        n: isize
    }

    let a = (n + 999) / 1000;
    println!("{}", a * 1000 - n);
}
