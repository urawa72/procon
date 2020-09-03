use proconio::{input, fastout};
use std::cmp::{max};

struct UnionFind {
    parents: Vec<isize>,
}

impl UnionFind {
    fn new(n: usize) -> Self {
        UnionFind { parents: vec![-1; n] }
    }

    fn root(&mut self, x: &usize) -> usize {
        let px = self.parents[*x];
        if px < 0 {
            return *x;
        } else {
            let pp = self.root(&(px as usize));
            self.parents[*x] = pp as isize;
            return pp;
        }
    }

    fn same(&mut self, x: &usize, y: &usize) -> bool {
        self.root(x) == self.root(y)
    }

    fn join(&mut self, x: &usize, y: &usize) {
        let rx = self.root(x);
        let cx = self.parents[rx];
        let ry = self.root(y);
        if rx == ry { return; }
        self.parents[rx] = ry as isize;
        self.parents[ry] += cx;
    }

    fn size(&mut self, x: &usize) -> usize {
        let rx = self.root(x);
        -self.parents[rx] as usize
    }
}

#[fastout]
fn main() {
    input! {
        n: usize,
        m: usize,
        ab: [(usize, usize); m],
    }

    let mut uf = UnionFind::new(n);
    for (mut a, mut b) in ab {
        a -= 1;
        b -= 1;
        uf.join(&a, &b);
    }
    let mut ans = 0;
    for i in 0..n {
        ans = max(uf.size(&i), ans);
    }
    println!("{}", ans)
}
