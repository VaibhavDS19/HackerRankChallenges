use std::io;

fn main() {
    let mut t = String::new();
    io::stdin()
        .read_line(&mut t)
        .expect("failed to read line.");
    let mut t: u64 = t.trim().parse().expect("Error");

    /*
        Logic
        Take the number n, we have to find till n-1 according to specification
        Since we have multiples of 3 till n, ex 3,6,9,12,15.., we can take it as 3*(1+2+3..)
        So sum of divisible by 3 is sum of 1..(n-1)/3 * 3
        Similarly for 5, sum is sum of 1..(n-1)/5 * 5
        For values divisible by both 5 and 3, we subtract sum of numbers divisible by 15
        Since each value divisible by both is counted twice, we remove it once
        By subtracting sum of 1..(n-1)/15 * 15
        This is used here
     */
    //Test cases
    for i in 0..t {
        let mut n = String::new();
        io::stdin()
            .read_line(&mut n)
            .expect("failed to read line.");
        let mut n: u64 = n.trim().parse().expect("Error");
        n -= 1;
        let mut sum:u64 = 0;
        let mut adds:u64;
        //Divisible by 3
        adds = (n /3 as u64);
        sum += adds*(adds + 1 as u64)/2 as u64 *3 as u64;
        //Divisible by 5
        adds = (n /5 as u64);
        sum += adds*(adds + 1 as u64)/2 as u64 *5 as u64;
        //Divisible by 15
        adds = (n /15 as u64);
        sum -= adds*(adds + 1 as u64)/2 as u64 *15 as u64;
        println!("{}", sum);
    }
}
