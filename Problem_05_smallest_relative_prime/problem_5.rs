fn main() {
    let mut result = 0;

    let mut counter = 1;
    while result == 0 {
        counter += 1;

        let mut possible_result = true;
        let mut inner_counter = 20;
        while possible_result && inner_counter > 1 {
            if counter % inner_counter != 0 {
                possible_result = false;
                break;
            }
            inner_counter -= 1;
        }
        if possible_result {
            result = counter;
        }
    }

    println!("Result: {}", result);
}
