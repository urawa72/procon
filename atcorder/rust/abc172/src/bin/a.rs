use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        a: isize
    }

    println!("{}", a + a * a + a * a * a);
}
