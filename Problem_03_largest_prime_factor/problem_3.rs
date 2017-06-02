use std::time::SystemTime;

fn is_prime(number: i64) -> bool {
    let limit = (number as f64).sqrt() as i64 + 1;
    let mut factor_exists = false;
    
    for i in 2..limit {
        if number % i == 0 {
            factor_exists = true;
            break;
        }
    }

    !factor_exists
}

fn main() {
    let large_number = 600851475143;
    let limit = (large_number as f64).sqrt() as i64 + 1;    

    let mut result = 0;

    let time_start = SystemTime::now();

    for i in (3..limit).rev() {
        if large_number % i == 0 && is_prime(i){
            result = i;
            break;
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

    println!("Result: {}", result);
}
