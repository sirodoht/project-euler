use std::fs::File;
use std::io::Read;

fn main() {
    const SIZE: usize = 50;
    let mut pre_sums_list: [u64; SIZE] = [0; SIZE];

    let mut data = String::new();
    let mut f = File::open("data.txt").unwrap();
    f.read_to_string(&mut data).unwrap();

    for (line_index, line) in data.lines().enumerate() {
        println!("{}: {}", line_index, line);
        for (letter_index, letter) in line.chars().enumerate() {
            println!("{}: {}", letter_index, letter);
            let digit: u64 = letter.to_digit(10).unwrap() as u64;
            println!("digit: {}", digit);
            let mut position_sum: u64 = pre_sums_list[letter_index];
            println!("position_sum[{}]: {}", letter_index, position_sum);
            position_sum += digit;
            println!("position_sum: {}", position_sum);
            pre_sums_list[letter_index] = position_sum;
        }
    }

    print!("\npre_sums_list: [ ");
    for elem in pre_sums_list.iter() {
        print!("{} ", elem);
    }
    println!("]\n");

    let sums_list = &pre_sums_list[0..11];

    print!("\nsums_list: [ ");
    for elem in sums_list.iter() {
        print!("{} ", elem);
    }
    println!("]\n");

    let mut numeral_result: u64 = 0;
    for (index, value) in sums_list.iter().rev().enumerate() {
        let mul_index = 10u64.pow(index as u32);
        let temp_result: u64 = (*value as u64) * (mul_index as u64);
        numeral_result += temp_result as u64;
        println!("sums_list[{}]: {}", index, value);
        println!("partial numeral_result: {}", numeral_result);
    }
    println!("numeral_result: {}", numeral_result);

    let final_result = numeral_result.to_string();
    let final_result = &final_result[0..10];

    println!("final_result: {}", final_result);
}
