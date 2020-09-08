use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        n: isize,
        s: [String; n]
    }

    let mut ans = vec![0; 4];
    for i in s {
        if i == "AC" { ans[0] += 1 }
        if i == "WA" { ans[1] += 1 }
        if i == "TLE" { ans[2] += 1 }
        if i == "RE" { ans[3] += 1 }
    }

    println!("AC x {}", ans[0]);
    println!("WA x {}", ans[1]);
    println!("TLE x {}", ans[2]);
    println!("RE x {}", ans[3]);
}
