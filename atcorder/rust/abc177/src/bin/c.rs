use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        n: usize,
        a: [i64; n],
    }

    let mut sum = a.iter().fold(0, |a, x| a + x);
    const MOD: i64 = 1000000007;
    sum %= MOD;

    let mut ans = 0;
    for i in 0..n {
        sum -= a[i];
        if sum < 0 { sum += MOD }
        ans += sum * a[i];
        ans %= MOD;
    }

    println!("{}", ans);
}
