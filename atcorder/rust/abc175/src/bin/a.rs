use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {
        s: String
    }

    if s.contains("RRR") {
        println!(3);
        return
    }
    if s.contains("RR") {
        println!(2);
        return
    }
    if s.contains("R") {
        println!(1);
        return
    }
    println!(0);

}
