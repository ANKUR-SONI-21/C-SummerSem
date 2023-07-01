#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // // Q1
    // int a, b, c, D;
    // a = 1;
    // b = 3;
    // c = 2;
    // D = (b * b) - (4 * a * c);
    // if (D <= 0)
    // {
    //     printf("Irrational number!");
    // }
    // float root1, root2;
    // root1 = (b + sqrt(D)) / (2 * a);
    // root2 = (b - sqrt(D)) / (2 * a);
    // printf("Roots of the Equation : %f , %f \n", root1, root2);

    // // Q2
    // printf("I\nam\t Ankur\b Soni");
    // //^ \b moves the cursor backward
    // //^ \t horizontal tab

    // // Q3 ;
    // int five = 5;
    // int V = five;
    // five += 1;
    // V -= 1;
    // printf("\n%d", five);
    // printf("\n%d", V);

    // Q4 :
    // int six = 6;
    // printf("print then increment : %d\n", six++);
    // printf("after incrementing : %d\n", six);
    // printf("increment then print : %d", ++six);

    // // Q5:
    // int a, b, c;
    // a = 10;
    // b = 15;
    // c = a;
    // a = b;
    // b = c;

    // printf("a : %d\n", a);
    // printf("b : %d\n", b);

    // // Q6 :
    // char a = 'a';
    // int b = 999;
    // float c = 1234.5678;
    // long int d = 1231231243;
    // double e = 123242.12312312;
    // printf("%d , %d , %d , %d , %d", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e));

    // //? Q7:
    // int a = 12;
    // printf("Left shift of a by 1 : %d\n", (a << 1));
    // printf("Right shift of a by 1 : %d\n", (a >> 1));

    // //? Q8:
    // int x;
    // scanf(" %d", &x);
    // (x != 1) ? (printf("X is not Equal to One!")) : printf("X is Equal to One");

    //? Q9 :
    int mean;
    double sum = 1234.5678;
    int numOfInputs = 10;
    mean = sum / numOfInputs;
    printf("Mean : %d\n", mean);

    //? Q10:
    auto num = 1234.5678;
    //^ defualt storage class
    //* end of block -> lifetime
    static num2 = 12345;
    //^ changes value on modification by function calls , used for making counters, zero as defualt value
    //* end of program
    register num3 = 123;
    //^ stores value in the register
    //* end of block
    extern num4;
    //^ global variable , value can be given in any file
    //* end of program
    return 0;
}