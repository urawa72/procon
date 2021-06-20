use proconio::marker::{Chars, Isize1};
use proconio::{fastout, input};
use std::collections::{HashSet, VecDeque};

#[fastout]
fn main() {
    input! {
        h: isize,
        w: isize,
        start: (Isize1, Isize1),
        goal: (Isize1, Isize1),
        s: [Chars; h as usize]
    }

    let mut seen: HashSet<(isize, isize)> = HashSet::new();
    let mut deq: VecDeque<(isize, isize, isize)> = VecDeque::new();
    deq.push_back((start.1, start.0, 0));

    while !deq.is_empty() {
        let (x, y, point) = deq.pop_front().unwrap();
        if x == goal.1 && y == goal.0 {
            println!("{}", point);
            return;
        }
        if seen.contains(&(x, y)) {
            continue;
        }
        seen.insert((x, y));

        for r in -2..=2isize {
            for c in -2..=2isize {
                if r == 0 && c == 0 {
                    continue;
                }

                let nx = x + c;
                let ny = y + r;
                if nx < 0 || w <= nx || ny < 0 || h <= ny {
                    continue;
                }
                if s[ny as usize][nx as usize] != '.' {
                    continue;
                }
                if seen.contains(&(nx, ny)) {
                    continue;
                }
                if r.abs() + c.abs() == 1 {
                    deq.push_front((nx, ny, point));
                } else {
                    deq.push_back((nx, ny, point + 1));
                }
            }
        }
    }

    println!("-1");
}
