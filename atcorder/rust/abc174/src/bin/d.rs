use proconio::{input, fastout};
use std::*;

#[allow(unused_variables)]
#[fastout]
fn main() {
    input! {
        n: isize,
        s: String
    }

    let mut rc = 0;
    for i in s.chars() {
        if i == 'R' { rc += 1 }
    }

    let mut ans = 0;
    for i in s.chars() {
        if rc == 0 { break }
        if i == 'W' {
            ans += 1;
            rc -= 1;
        } else {
            rc -= 1;
        }
    }
    println!("{}", ans);

}
