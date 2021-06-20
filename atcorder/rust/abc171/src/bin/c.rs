use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        mut n: usize
    }

    let mut ans: Vec<char> = Vec::new();
    while 0 < n {
        n -= 1;
        let c = (n % 26) as u32;
        ans.push(std::char::from_u32(c + ('a' as u32)).unwrap());
        n /= 26;
    }

    ans.reverse();
    for c in ans {
        print!("{}", c);
    }
    println!();

}
