use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
      arr: [usize; 5]
    }

    for i in 0..5 {
        if arr[i] == 0 {
            println!("{}", i + 1);
            break;
        }
    }
}
