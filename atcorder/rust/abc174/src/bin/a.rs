use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        x: isize
    }

    if 30 <= x {
        println!("Yes");
    } else {
        println!("No");
    }
}
