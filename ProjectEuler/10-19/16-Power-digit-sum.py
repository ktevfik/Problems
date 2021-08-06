# PROBLEM = https://projecteuler.net/problem=17

x = 2**1000
k= []
while(x > 0):
    k.append(x%10)
    x = x // 10
print(sum(k))