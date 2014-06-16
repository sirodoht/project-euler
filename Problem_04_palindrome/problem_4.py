def is_palindrome(number):
    reversed_number = 0
    n = number

    while(n):
        reversed_number = reversed_number * 10 + (n % 10)
        #print("reversed_number:", reversed_number)
        n //= 10
        #print("n:", n)

    return number == reversed_number


largest_palindrome = -1
for i in range(100, 1000):
    #print("i:", i)
    for j in range(100, 1000):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product
            print("Palindrome:", product)

print("Result:", largest_palindrome)
