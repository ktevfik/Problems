// PROBLEM = https://projecteuler.net/problem=2

#include <stdio.h>

int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, n, sum = 0;
    n = get_int("Please enter a positive number : \n");

    nextTerm = t1 + t2;

    while (nextTerm <= n)
    {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        if (nextTerm % 2 == 0)
        {
            sum = sum + nextTerm;
        }
    }
    printf("total: %i\n", sum);

    return 0;
}
