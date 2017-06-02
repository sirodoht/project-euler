use std::time::SystemTime;

fn is_palindrome(input_number: i64) -> bool {
    let mut number = input_number;
    let mut reversed_number = 0;

    while number > 0 {
        let digit = number % 10;
        number = number / 10;

        reversed_number *= 10;
        reversed_number += digit;
    }

    input_number == reversed_number
}

fn main() {
    let mut largest_palindrome = -1;

    let time_start = SystemTime::now();

    for i in 100..1000 {
        for j in 100..1000 {
            if i < j {  // we have searched for that in i*j (this is j*i)
                break
            }

            let product = i * j;
            let is_product_palindrome = is_palindrome(product);
            if is_product_palindrome && product > largest_palindrome {
                // println!("{} * {} = {}, palindrome?: {}", i, j, product, is_product_palindrome);
                largest_palindrome = product;
            }
        }
    }

    match time_start.elapsed() {
        Ok(elapsed) => {
            println!("Calc duration: {}", elapsed.as_secs());
            println!("Subsec nanos: {}", elapsed.subsec_nanos());
        }
        Err(e) => {
            println!("Error: {:?}", e);
        }
    }

    println!("Largest 3-digit palindrome: {}", largest_palindrome);
}
