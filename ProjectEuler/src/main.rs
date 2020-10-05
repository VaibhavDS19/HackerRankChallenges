use std::io;

fn main() {
    let mut t = String::new();
    io::stdin()
        .read_line(&mut t)
        .expect("failed to read line.");
    let mut t: u64 = t.trim().parse().expect("Error");
    let mut V:vec<u64>;
    /*
        Logic
        Take an array of primes
        Store all primes till n
        If max>n, check if n is present
        Else check from sqrt(n) till 1.
     */
    //Test cases
    for i in 0..t {
        let mut n = String::new();
        io::stdin()
            .read_line(&mut n)
            .expect("failed to read line.");
        let mut n: u64 = n.trim().parse().expect("Error");
        println!("{}", sum);
    }
}
