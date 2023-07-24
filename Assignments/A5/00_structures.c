#include <stdio.h>
#include <stdlib.h>

//! typedef
// The typedef is a keyword that is used to provide existing data types with a new name.
typedef long long ll;
//^ now long long can be written as ll

// typedef structure
typedef struct
{
    int name;
    int age;
    int class;
} _KIDS;

// ^_KIDS is the new name of the structure

_KIDS k1, k2, k3;
//^ now structs can be made using _KIDS

// !Memory is allocated to structure during creation of variable of
//! structure not during declaration of structure.
struct Teacher
{
    char name[25];
    int age;
    char department[25];
} t1, t1, t3 = {"ankur", 10, "english"};
//^ predefinig some variables directly

struct Student
{
    int name;
    int age;
    int class;
};

struct Complex
{
    float real;
    float complex;
} a, b, c;

int main()
{
    struct Student a1, a2, a3;
    // compex nnumber
    scanf("%f %f", &a.real, &a.complex);
    scanf("%f %f", &b.real, &b.complex);

    c.real = a.real + b.real;
    c.complex = a.complex + b.complex;
    printf("\n %f +  %fj", c.real, c.complex);

    //! type def
    ll var = 15;
    //! type def structure
    _KIDS k4, k5, k6;

    //! pointer to structure
    struct Teacher *ptr;
    ptr = &t3;
    printf("%d\n", t3.age);
    printf("%d\n", (*ptr).age);

    return 0;
}