#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int a = 4, b = 8;
    int *ptr;

    // pointing the pointer to "a" by saving its address in ptr;
    ptr = &a;
    //^ ptr holds the address of "A"
    printf("%d\n", *ptr);
    //* "*" is the indirection operator
    //^ it is used to access the value of the variable
    b = *ptr;
    //^ b is assigned the value of the variable:"a" through pointer
    printf("%d\n", b);

    //* some more examples
    int sum = *ptr + b;
    int prod = *ptr * b;
    printf("%d\n", sum);
    printf("%d\n", prod);

    //* things allowed in C
    int arr[] = {11, 25, 33, 41, 58, 69, 73, 87, 94, 101};
    int *i, *j;
    i = &arr[1];
    j = &arr[8];
    printf("%d %d \n", j - i, *j - *i);
    //^ j-i gives difference between address
    //^ another one with indirection operator gives value of sub

    //! printf("%d %d ", j + i, *j * 5 - *i / 3);
    //^ multipication and addition and division are not allowed

    //! call by referrence and value
    /*
        ?Call By Value:In this approach we pass copy of actual variables in
        ?function as a parameter.

        *Hence any modification on parameters inside the function will not
        *reflect in the actual variable.


        ? Call By Reference:In this approach we pass memory address of
        ?actual variables in function as a parameter.

        * Hence any modification on parameters inside the function will
        *reflect in the actual variable.
     */

    //! pointers and arrays

    int *arrptr = &arr[0];
    printf("%d\n", *arrptr++);
    printf("%d\n", *arrptr++);
    printf("%d\n", *arrptr++);
    printf("%d\n", *arrptr++);
    printf("%d\n", *arrptr++);
    printf("%d\n", *arrptr++);
    printf("%d\n", *arrptr++);

    //! printing using pointers
    // display(arr, 10);
    //^ passing an entire array
    // display(&arr[0], 10);
    //^ passing the address of the first elemeent

    //! array of pointers
    int *ptrArr[4];
    int x = 35, y = 34, k = 67, l = 99;
    ptrArr[0] = &x;
    ptrArr[1] = &y;
    ptrArr[2] = &k;
    ptrArr[3] = &l;
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *ptrArr[i]);
    }

    //! argument count : stores the number of command line argumetns pasees by the user
    //!  argumetn vector : is an array of char pointers listing all the arguments

    // printf("%s", argv[1]);

    //! NULL pointers
    int *nullPtr = NULL;
    // *nullPtr = 3;
    // printf("%d\n", *nullPtr); //! error : segmentation fualt
    //^ will return nothing/eroor because the address for 3 is not saved in nullptr but only its value
    //? instead
    int val = 6;
    nullPtr = &val;
    //^ assigning an address to the pointer
    *nullPtr = 5;
    printf("%d\n", *nullPtr);
    printf("%d\n", val);
    //^ val of val is also changed to 5

    //! wild pinters
    int *p;
    //^ wild pointer
    p = &val;
    //^ not a wild pointer anymore

    //! dangling pointer
    char *chptr = NULL;
    {
        char ch;
        ptr = &ch;
        //^ since ch is only available here it will not return any error
    }
    //^ outside the block there is no ch hence chptr cannot access the ch address
    //^ and is pointing to an invalid memory location

    //! void pointer
    void *v;
    //^ no type is associuated to it hence can be used to store addres of any type;
    int *abc;
    float *efg;
    double *hij;

    v = &abc;
    v = &efg;
    v = &hij;

    //! pointer with strings
    char c[] = "TIET";
    char *p = c;
    while (*p != NULL)
    {
        printf("%c", *p);
        p++;
    }

    char *s = "TIET";
    printf("%s", s);
    //! another way
    return 0;
}