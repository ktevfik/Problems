# PROBLEM = https://projecteuler.net/problem=8

number = 7316717663450

# ORIGINAL NUMBER IN LINK

digits = []
while(number > 0):
    digit = number % 10;
    digits.append(digit);
    number = number // 10;

multiplies = []

for i in range(len(digits)-12):
    multiply4digits = digits[i] * digits[i+1]*digits[i+2]* digits[i+3]* digits[i+4]* digits[i+5]* digits[i+6]* digits[i+7]* digits[i+8]* digits[i+9]* digits[i+10]* digits[i+11]* digits[i+12]
    multiplies.append(multiply4digits)

multiplies.sort()
print(multiplies[len(multiplies)-1])
