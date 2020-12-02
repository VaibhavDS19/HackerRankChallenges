use std::io;
fn main() {
    let mut s = String::new();
    io::stdin()
        .read_line(&mut s)
        .expect("error reading line");
    let mut top = 0;
    let mut v:Vec<char> = Vec::new();
    for ch in s.chars() {
        if top>0 && v[top-1]==ch {
            v.pop();
            top = top -1;
        } else {
            v.push(ch);
            top = top +1;
        }
    }
    let s2: String = v.iter().collect();
    if s2.len()>0 {
        println!("{}", s2);
    } else {
        println!("Empty String");
    }
}
