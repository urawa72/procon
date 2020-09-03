use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        d: usize,
        t: usize,
        s: usize,
    }

    if d <= t * s {
        println!("Yes");
    } else {
        println!("No");
    }
}
