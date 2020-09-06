use proconio::{input, marker::Usize1};

fn main() {
    input! {
        h: usize,
        w: usize,
        m: usize,
        b: [(Usize1, Usize1); m]
    }

    let mut row = vec![0; h];
    let mut col = vec![0; w];

    // 行・列ごとに対象を数える
    for &(i, j) in &b {
        row[i] += 1;
        col[j] += 1;
    }

    // 一番対象の多い行と列を特定する
    let mr = *row.iter().max().unwrap();
    let mc = *col.iter().max().unwrap();

    // 一番対象の多い行・列が複数あるかカウント
    let cr = row.iter().filter(|&&c| c == mr).count();
    let cc = col.iter().filter(|&&c| c == mc).count();
    // 一番対象の多い行・列と同じ座標のマスが存在するかカウント
    let bc = b
        .iter()
        .filter(|&&(i, j)| row[i] == mr && col[j] == mc)
        .count();

    // 対象のあるマスに置かなければ行けない場合は-1する
    let ans = if bc < cr * cc { mr + mc } else { mr + mc - 1 };
    println!("{}", ans);
}
