import datetime

term_a = 1
term_b = 2
sum = 0

time_a = datetime.datetime.now()

while term_a < 4000000 and term_b < 4000000:
    print("Current Sum {:,}".format(sum))

    if term_a % 2 == 0:
        sum += term_a

    if term_b % 2 == 0:
        sum += term_b

    term_a += term_b
    term_b += term_a

print("Result:", sum)

time_b = datetime.datetime.now()

print("Microseconds elapsed:", time_b-time_a)
