use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        n: usize,
        arr: [usize; n]
    }

    let sum = arr.iter().fold(0, |acc, val| acc ^ val);
    for a in arr {
        println!("{}", sum ^ a);
    }

}
