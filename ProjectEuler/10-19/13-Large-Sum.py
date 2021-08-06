# PROBLEM = https://projecteuler.net/problem=13

def calculate(number):
    total = sum(number)

    digits = []

    for i in str(total):
        digits.append(i)

    for i in range(0,10):
        print(digits[i],end="")

number =[37107287533902102798797998220837590246510135740250,
46376937677490009712648124896970078050417018260538]

# ORIGINAL NUMBER IN LINK

calculate(number)