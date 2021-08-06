// PROBLEM = https://projecteuler.net/problem=4

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int isPalindrome(int x);
int main(void)
{
    int result,max;
    for(int i = 999; i > 100;i--)
    {
        for(int j = 999; j > 100;j--)
        {
            result = i*j;
            if(isPalindrome(result) == 0)
            {
                max=result;
                printf("%d * %d = %d\n",i,j ,max);
            }
        }
    }
    printf("\nPress any key to exit");
    printf("%c",getch());
    return 0;
}

int isPalindrome(int x)
{
    int sayi,sayi1,t;
    sayi = x;
    sayi1=sayi;
	int basamak=0;
    do
	{
		sayi /= 10;
		basamak++;
	}while(sayi > 0);

    int list[basamak];
    
	for (int i = basamak-1 ;i >= 0;i--)
	{
		list[i] = sayi1 % 10;
		sayi1 /= 10;
	}

    for(int i = 0;i < basamak; i++)
    {
            if(list[i] == list[basamak-1-i])
            {
                t = 1;
            }
            else
            {
                t = 2;
                break;
            }
    }
    if(t == 1)
    {
        return 0;
    }
}
