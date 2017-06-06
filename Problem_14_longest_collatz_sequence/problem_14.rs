fn collatz(num: u32) -> u32 {
    if num == 1 {
        return num;
    }

    if num % 2 == 0 {
        num / 2
    } else {
        (num * 3) + 1
    }
}

fn main() {
    let mut max_terms: u32 = 0;
    let mut max_terms_number: u32 = 0;

    for i in 2..1_000_001 {
        let mut current_terms: u32 = 0;
        let mut result: u32 = i;
        while result != 1 {
            result = collatz(result);
            current_terms += 1;
            if current_terms > max_terms {
                max_terms = current_terms;
                max_terms_number = i;
            }
        }
        // println!("collatz({}) -> {}", i, current_terms);
    }

    println!("Result: {}", max_terms_number);
}
