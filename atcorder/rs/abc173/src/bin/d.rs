use proconio::{input, fastout};
use std::collections::BinaryHeap;

#[fastout]
fn main() {
    input! {
        n: usize,
        mut a: [usize; n]
    }

    a.sort();
    a.reverse();
    // priority_queue
    let mut q = BinaryHeap::new();
    q.push(a[0]);
    let mut ans = 0;
    for i in 1..n {
        let k = q.pop().unwrap();
        ans += k;
        q.push(a[i]);
        q.push(a[i]);
    }
    println!("{}", ans);
}
