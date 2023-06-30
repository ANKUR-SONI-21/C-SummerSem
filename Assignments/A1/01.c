#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    //? Q1 : print hello world
    printf("Hello World\n");

    //? Q2 : input integer and display it
    int x;
    printf("Enter A Number : ");
    scanf(" %d", &x);
    printf("The Number You Entered : %d\n", x);

    //? Q3 : input a char
    char a;
    printf("Enter A Char : ");
    scanf(" %c", &a);
    printf("The Char You Entered : %c\n", a);

    //? Q3 : input a char using %d
    char b;
    printf("Enter A Char : ");
    scanf(" %c", &b);
    printf("The Char You Entered : %d\n", b);

    //? Q4 : input a fraction
    float f;
    printf("Enter a fraction : ");
    scanf("%f", &f);
    printf("The Fraction You Entered : %f\n", f);

    //? Q5 : add,subtract,multiply,divide numbers
    int one, two, add, sub, mul, div;
    one = 10;
    two = 20;
    add = one + two;
    sub = two - one;
    mul = one * two;
    div = two / one;
    printf("Subtacting the two numbers : %d\n", sub);
    printf("Adding the two numbers : %d\n", add);
    printf("Multiplying the two numbers : %d\n", mul);
    printf("Dividing the two numbers : %d\n", div);

    //? Q6 : Nth Root of a Number
    float X;
    int n;
    scanf(" %f", &X);
    scanf(" %d", &n);
    float nth_root = trunc(pow(X, 1.0 / n));
    if (pow(nth_root + 1, n) <= X)
    {
        printf("Nth Root : %f", nth_root + 1);
    }
    printf("Nth Root : %f", nth_root);

    //? Q7 : Area of circle
    float radius;
    printf("Enter  Radius : ");
    scanf(" %f", &radius);
    float area = 3.14 * (radius * radius);
    printf("Area : %f", area);

    //? Q8 : Simple Interest
    float principle, intrest, timeInYears;
    principle = 1023678;
    intrest = 12.45;
    timeInYears = 3.1;
    float totalAmount = principle + (principle * (intrest / 100)) * timeInYears;
    printf("Total Amount : %f", totalAmount);

    //? Q9 :  Compound Intrest
    float principle, intrest, timeInYears, totalAmount;
    totalAmount = principle = 1023678;
    intrest = 12.45;
    timeInYears = 3.1;
    int x = timeInYears;
    while (x != 1)
    {
        totalAmount = totalAmount + (totalAmount * (intrest / 100)) * timeInYears;
        x--;
    }
    printf("Total Amount : %f", totalAmount);

    //? Q10 : gross salary
    float basic, da, ta;
    basic = 10239012;
    da = 0.1 * basic;
    ta = 0.12 * basic;
    printf("Total Salary : %f", basic + ta + da);

    return 0;
}