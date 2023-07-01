#include <stdio.h>
#include <stdlib.h>

int main()
{
    // // Q1 :
    // int integer;
    // scanf(" %d", &integer);
    // (integer % 2 != 0) ? printf("ODD!") : printf("EVEN!");

    // // Q2:
    // int year;
    // scanf(" %d", &year);
    // (year % 400 == 0 || year % 100 == 0 || year % 4 == 0) ? printf("Leap Year!") : printf("Not Leap Year!");

    // Q3:
    int a, b, c;
    a = 10;
    b = 12;
    c = 13;
    if (a < b && b < c)
        printf("A is youngest\n");
    else if (b < a && b < c)
        printf("B is youngest\n");
    else if (c < a && c < b)
        printf("C is youngest\n");

    // Q4:
    int x, y, z;
    x = 30;
    y = 60;
    z = 90;
    (x + y + z == 180) ? printf("Valid Triangle!\n") : printf("Invlaid Triangle!\n");

    // Q5:
    int l, br;
    l = 2;
    br = 4;
    (l * br > 2 * (l + br)) ? printf("Area is Greater!\n") : printf("Perimeter is Greater!\n");

    // Q6:
    char ch;
    int ascii;
    printf("Enter a character: ");
    scanf("%c", &ch);
    ascii = ch;

    printf("ASCII value of %c is: %d\n", ch, ascii);

    // for capital characters (A to Z)
    if (ascii >= 65 && ascii <= 90)
        printf("%c is a capital letter");

    // for small characters (a to z)
    else if (ascii >= 97 && ascii <= 122)
        printf("%c is a small letter");

    // for digits (0 to 9)
    else if (ascii >= 48 && ascii <= 57)
        printf("%c is a digit");

    // for special symbols
    else if (ascii >= 0 && ascii <= 47 || ascii >= 58 && ascii <= 64 || ascii >= 91 && ascii <= 96 || ascii >= 123 && ascii <= 127)
        printf("%c is a special symbols");

    //Q7 : 
    
    return 0;
}