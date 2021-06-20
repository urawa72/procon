use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        a: char
    }

    if 'A' <= a && a <= 'Z' {
        println!('A');
    } else {
        println!('a');
    }
}
