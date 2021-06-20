use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        n: usize,
        a: [usize; n],
        q: usize,
        bc: [(usize, usize); q]
    }

    let mut mp = vec![0; 100001];
    let mut sum = 0;
    for i in a {
        sum += i;
        mp[i] += 1;
    }

    for (b, c) in bc {
        let tmp = mp[b];
        sum = sum - b * tmp + c * tmp;
        println!("{}", sum);
        mp[b] = 0;
        mp[c] += tmp;
    }

}
