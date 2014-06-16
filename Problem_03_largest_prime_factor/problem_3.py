# Simple function for primeness test
def is_prime(number):
    import math

    limit = int(math.sqrt(number)) + 1

    if number == 2:
        return True
    if number % 2 == 0:
        return False
    for i in range(3, limit, 2):
        if number % i == 0:
            return False

    return True


import math

large_number = 600851475143
limit_large_number = int(math.sqrt(large_number))
answer = -1

for i in range(2, limit_large_number):
    if large_number % i == 0 and is_prime(i):  # short circuit evaluation FTW!
        answer = i

print("Result:", answer)
