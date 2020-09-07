use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        n: usize,
        l: [usize; n]
    }

    let mut cnt = 0;
    for i in 0..n {
        for j in (i + 1)..n {
            for k in (j + 1)..n {
                if l[i] == l[j] || l[j] == l[k] || l[k] == l[i] {
                    continue;
                }
                if l[k] < l[i] + l[j] && l[i] < l[j] + l[k] && l[j] < l[k] + l[i] {
                    cnt += 1;
                }
            }
        }
    }
    println!("{}", cnt);

}
