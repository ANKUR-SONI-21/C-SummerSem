#include <stdio.h>
#include <stdlib.h>
union teacher
{
    char name[25];
    int age;
};

int main()
{
    union teacher t1;
    t1.age = 15;
    //^ ar an instance of time only one element can hold a value of any data type
    //printf("Name : %s", t1.name);
    printf("Age : %d", t1.age);
    return 0;
}

//! disadvantages of structures:
//* cannot use struct as build in datatypes..... hence cannot use operators like +,- on them
//* No functions inside structure
//* no static members inside functions