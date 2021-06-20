use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        s: String,
        t: String
    }
    let n = s.len();
    let sc: Vec<char> = s.chars().collect();
    let tc: Vec<char> = t.chars().collect();

    let mut ans = 0;
    for i in 0..n {
        if sc[i] != tc[i] { ans += 1 }
    }

    println!("{}", ans);

}
