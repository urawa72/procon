use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        mut n: String,
    }
    let mut sum = 0;
    for c in n.chars() {
        sum += c.to_digit(10).unwrap();
    }
    println!("{}", if sum % 9 == 0 { "Yes" } else { "No" });

}
