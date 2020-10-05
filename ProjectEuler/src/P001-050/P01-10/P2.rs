use std::io;

fn main() {
    let mut t = String::new();
    io::stdin()
        .read_line(&mut t)
        .expect("failed to read line.");
    let mut t: u64 = t.trim().parse().expect("Error");

    /*
        Logic
        Till n, the even terms go as En = 4 * En-1 + En-2
        Hence, taking sum is easy.
     */
    //Test cases
    for i in 0..t {
        let mut n = String::new();
        io::stdin()
            .read_line(&mut n)
            .expect("failed to read line.");
        let mut n: u64 = n.trim().parse().expect("Error");
        let mut sum: u64 = 0;
        let mut num: u64 = 2;
        let mut prev: u64 = 0;
        let mut cur:u64 = 0;
        while num < n {
            sum += num;
            cur = num;
            num = num*4 + prev;
            prev = cur;
        }
        println!("{}", sum);
    }
}
