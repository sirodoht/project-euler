use std::time::SystemTime;

fn main() {
    let mut fib_a = 1;
    let mut fib_b = 2;

    let mut sum = 0;

    let time_start = SystemTime::now();
    
    loop {
        println!("fib_a = {}", fib_a);
        println!("fib_b = {}", fib_b);

        if fib_a % 2 == 0 {
            sum += fib_a;
        }

        if fib_b % 2 == 0 {
            sum += fib_b;
        }

        fib_a = fib_a + fib_b;
        fib_b = fib_a + fib_b;

        if fib_a > 4_000_000 || fib_b > 4_000_000 {
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

   println!("Sum of the even numbers: {}", sum);
}