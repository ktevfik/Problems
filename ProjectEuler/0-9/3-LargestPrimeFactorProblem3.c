// PROBLEM = https://projecteuler.net/problem=3

#include <stdio.h>

int main()
{
    long i, j, num, isPrime;

    printf("Enter any number to print Prime factors: ");
    scanf("%ld", &num);

    printf("All Prime Factors of %ld are: \n", num);

    // Find all Prime factors 
    for (i = 2; i <= num; i++)
    {
        // Check 'i' for factor of num 
        if (num % i == 0)
        {
            // Check 'i' for Prime 
            isPrime = 1;
            for (j = 2 ; j <= i / 2 ; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                }
            }
            // If 'i' is Prime number and factor of num 
            if (isPrime == 1)
            {
                printf("%ld \n", i);
            }
            else
            {
                 break;
            }
        }
    }

    return 0;
}
