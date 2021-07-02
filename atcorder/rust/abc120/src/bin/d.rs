use proconio::{fastout, input};

struct UnionFind {
    root: Vec<usize>,
    tree_size: Vec<usize>,
    count: usize,
}

impl UnionFind {
    fn new(size: usize) -> UnionFind {
        UnionFind {
            root: vec![0; size + 1],
            tree_size: vec![1; size + 1],
            count: size * (size - 1) / 2,
        }
    }

    fn union(&mut self, a: usize, b: usize) {
        let fa = self.find(a);
        let fb = self.find(b);
        self.unite(fa, fb);
    }

    fn find(&mut self, a: usize) -> usize {
        if self.root[a] == 0 {
            return a;
        } else {
            self.root[a] = self.find(self.root[a]);
            return self.root[a];
        }
    }

    fn unite(&mut self, a: usize, b: usize) -> () {
        if a == b {
            return ();
        }
        self.root[b] = a;
        self.count -= self.tree_size[a] * self.tree_size[b];
        self.tree_size[a] += self.tree_size[b];
        self.tree_size[b] = 0;
    }
}

#[fastout]
fn main() {
    input! {
      n: usize,
      m: usize,
      links: [(usize, usize); m]
    };

    let mut ans: Vec<usize> = Vec::new();
    let mut uf = UnionFind::new(n);

    for link in links.iter().rev() {
        ans.push(uf.count);
        uf.union(link.0, link.1);
    }

    for a in ans.iter().rev() {
        println!("{}", a);
    }
}
