#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
int main()
{
    long n, i, sum = 0;
    scanf("%ld", &n);
    i = n;
    while (i)
    {
        // while(i > pow(10, 9))
        i = i / 2;
        sum += i;
        if (i <= 50)
        {
            printf("%ld\n", i);
            printf("%ld\n", n - sum);
            break;
        }
        printf("%ld\n", i);
        i = n - sum;
    }
}