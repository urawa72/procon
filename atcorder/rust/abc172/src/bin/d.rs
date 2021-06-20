use proconio::{input, fastout};

#[fastout]
fn main() {
    input! { n: i64 }

    let mut a: Vec<i64> = vec![0; 10000001];
    for i in 1..n + 1 {
        let mut j = 1;
        while i * j <= n {
            a[(i * j) as usize] += 1;
            j += 1;
        }
    }

    let mut ans: i64 = 0;
    for i in 1..n + 1 {
        ans += i * (a[i as usize]);
    }
    println!("{}", ans);
}
