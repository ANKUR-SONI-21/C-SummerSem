#include <stdio.h>
#include <stdlib.h>
int arr[] = {22, 34, 12, 33, 56, 19, 34, 33, 42, 23, 22, 26};
int size = (sizeof(arr) / sizeof(int));

void printArr(int *arr, int index)
{
    if (index < size)
    {
        printf("%d\n", arr[index]);
        printArr(arr, index + 1);
    }
}
int arrayMin(int *arr, int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int *copyArr(int *arr, int *newArr, int size)
{
    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }
    return newArr;
}
int *sort(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}
int *randomArr(int *randomArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        //*every element ranges from 0 to 99;
        randomArray[i] = rand() % 100;
    }
    return randomArray;
}
int main()
{
    //? Storing character arrays Find minimum of a set of 10 numbers
    int minElement = arrayMin(arr, size);
    printf("Min element in the array is : %d\n", minElement);
    //? Storing character arrays print elements using recurrsion
    // printArr(arr, 0);
    //? Storing character arrays Copy elements of an array to another
    int arr2[size];
    int *newArr;
    newArr = copyArr(arr, arr2, size);
    // printArr(newArr, 0);
    //? Storing character arrays Sort 1_d Array
    int *sortedArray = sort(arr, size);
    // printArr(sortedArray, 0);
    //? Storing character arrays median of sortedArray
    if (size % 2 == 0)
        printf("Median : %d\n", ((sortedArray[(size / 2) - 1]) + sortedArray[(size - 1) / 2]) / 2);
    else
        printf("Median : %d\n", sortedArray[(size - 1) / 2]);
    //? Storing character arrays random array values
    int randomArray[size];
    int *randArr = randomArr(randomArray, size);
    // printArr(randArr, 0);
    //? Storing character arrays
    //! important
    char name[6] = {'I', 'N', 'D', 'I', 'A', '\0'};
    //? matrix multiplication

    int row1, col1, row2, col2, c, d, k, sum = 0;

    int first[10][10], second[10][10], multiply[10][10];

    printf("Enter the number of rows and columns of first matrix\n");

    scanf("%d%d", &row1, &col1);

    printf("Enter the elements of first matrix\n");
    for (c = 0; c < row1; c++)
        for (d = 0; d < col1; d++)
            scanf("%d", &first[c][d]);

    printf("Enter the number of rows and columns of second matrix\n");

    scanf("%d%d", &row2, &col2);

    if (col1 != row2)
        printf("Matrices with entered orders can't be multiplied .\n");
    else
    {
        printf("Enter the elements of second matrix\n");
        for (c = 0; c < row1; c++)
            for (d = 0; d < col2; d++)
                scanf("%d", &second[c][d]);
    //! IMPORTANT
    mostImportantPart:
        for (c = 0; c < row1; c++) // row of first matrix
        {
            for (d = 0; d < col2; d++) // column of second matrix
            {
                for (k = 0; k < row2; k++)
                    sum = sum + first[c][k] * second[k][d];
                multiply[c][d] = sum;
                sum = 0;
            }
        }
    }
    printf("Product of entered matrices:-\n");
    for (c = 0; c < row1; c++)
    {
        for (d = 0; d < col2; d++)
            printf("%d\t", multiply[c][d]);
        printf("\n");
    }
    return 0;
}