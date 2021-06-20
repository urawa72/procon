use proconio::{input, fastout, marker::Chars};

#[fastout]
fn main() {
    input! {
        h: usize,
        w: usize,
        k: usize,
        c: [Chars; h]
    }

    let mut ans = 0;
    for bit_i in 0..1 << h {
        for bit_j in 0..1 << w {
            let mut n = 0;
            for i in 0..h {
                for j in 0..w {
                    if bit_i & (1 << i) == 0 && bit_j & (1 << j) == 0 && c[i][j] == '#' {
                        n += 1;
                    }
                }
            }
            if n == k { ans += 1 }
        }
    }
    println!("{}", ans);
}
