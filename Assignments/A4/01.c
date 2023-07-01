#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // Q1:
    long n;
    int m;
    long res = 1;
    scanf(" %d", &n);
    scanf(" %d", &m);
    for (int i = 0; i < m; i++)
    {
        res = res * n;
    }
    printf("%d\n", res);

    // Q2:
    int num, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number!", num);
    else
        printf("%d is a not prime number!", num);

    // Q3:
    int num = 123445;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d\n", i);
        }
    }

    // Q4:
    long int fact = 10;
    for (int i = fact - 1; i > 0; i--)
    {
        fact = fact * i;
    }
    printf("fact : %d", fact);

    // Q4:
    int fib1, fib2, fib3;
    fib1 = 0;
    fib2 = 1;
    int num = 5;
    printf("%d\n%d\n", fib1, fib2);
    for (int i = 0; i < num; i++)
    {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
        printf("%d\n", fib3);
    }

    // Q5
    int num, rem, sum = 0, i;
    printf("Enter a number\n");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is not a Perfect Number\n", num);

    // Q7:
    int num, rem, res = 0;
    printf("Enter a three digit number\n");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        res = res + (rem * rem * rem);
        num = num / 10;
    }

    if (res == num)
        printf("%d is an armstrong number: ", res);
    else
        printf("%d is NOT an armstrong number: ", res);

    // Q8:
    int num, rem, res = 0;
    printf("Enter a five digit number\n");
    scanf("%d", &num);
    int org = num;
    while (num != 0)
    {
        rem = num % 10;
        res = res * 10 + rem;
        num = num / 10;
    }
    if (res == org)
        printf("Same ");
    else
        printf("Not Same!, %d", res);

    // Q9:

    int num, posCount = 0, negCount = 0, zeroCount = 0;
    char choice;
    do
    {
        printf("Enter a Number : ");
        scanf(" %d", &num);
        if (num > 0)
        {
            posCount += 1;
        }
        else if (num < 0)
        {
            negCount += 1;
        }
        else
        {
            zeroCount += 1;
        }
        printf("Do you want to continue ? ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("The POSITIVE numbers are: %d\n", posCount);
    printf("The NEGATIVE numbers are: %d\n", negCount);
    printf("Total ZEROS are: %d\n", zeroCount);

    // Q10:
    int num, i, n, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (n = 0; n < num; n++)
    {
        if (n == 0 || n == 1)
            flag = 1;

        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf(" %d\n", n);
        }
        flag = 0;
    }

    // Q11:
    int num, rem, res = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 2;
        res = res * 10 + rem;
        num = num / 2;
    }
    while (res != 1)
    {
        rem = res % 10;
        num = num * 10 + rem;
        res = res / 10;
    }
    printf("Binary : %d", num);

    // Q12:
    int num, rem, res = 0, n = 0;
    printf("Enter a Binary number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        res = res + rem * pow(2, n);
        num = num / 10;
        n++;
    }
    printf("Binary : %d", res);

    // Q13:

    int num1, num2, gcd, lcm, remainder, numerator, denominator;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    // To find numerator and denominator
    numerator = (num1 > num2) ? num1 : num2;
    denominator = (num1 < num2) ? num1 : num2;
    remainder = numerator % denominator;

    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    gcd = denominator;
    lcm = num1 * num2 / gcd;
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}