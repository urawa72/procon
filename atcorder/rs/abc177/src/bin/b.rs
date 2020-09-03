use proconio::{input, fastout};
use std::cmp::{min};

#[fastout]
fn main() {
    input! {
        s: String,
        t: String,
    }

    let sc = s.chars().collect::<Vec<char>>();
    let tc = t.chars().collect::<Vec<char>>();
    let mut ans = std::i64::MAX;

    for i in 0..s.len() - t.len() + 1 {
        let mut cnt = 0;
        for j in 0..t.len() {
            if sc[i + j] != tc[j] {
                cnt += 1;
            }
        }
        ans = min(ans, cnt);
    }
    println!("{}", ans);

}
