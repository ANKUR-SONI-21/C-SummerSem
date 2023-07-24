#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Number of arguments: %d\n", argc);
    if (argc == 3)
    {
        printf("Sum of arguments is : %d\n", atoi(argv[1]) + atoi(argv[2]));
        //* atoi converts string to int and atof converts string to float
    }
    else
    {
        printf("Wrong Number of Arguments!");
    }
    return 0;
}

//! ON TERMINAL
// .\00_CommandLineArgs.exe 10 20 after compiling