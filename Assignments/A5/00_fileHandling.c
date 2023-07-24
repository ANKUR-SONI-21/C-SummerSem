#include <stdio.h>
#include <stdlib.h>

int getCount(FILE *filePointer)
{
    char ch;
    int count = 0;
    filePointer = fopen("a.txt", "r");
    if (filePointer == NULL)
    {
        printf("File not found!");
        exit(1);
    }
    while ((ch = fgetc(filePointer)) != EOF)
    // fgetc() reads a character from the file pointed to by filePointer
    // fgetc increments the file pointer to the next character every iteration
    // if ch is not equal to EOF(End Of File) then continue
    {
        if (ch == '\n')
            // if ch is equal to new line then increment count
            count++;
    }

    return count;
    fclose(filePointer);
}
void appendFile(FILE *filePointer)
{
    // "a" is used to append to the file "a.txt
    // it will start writing from the end of the file
    // without overwriting the previous data
    // whereas "w" will start writing from the beginning of the file
    // but will overwrite the previous data
    filePointer = fopen("a.txt", "a");
    if (filePointer == NULL)
    {
        printf("File not found!");
        exit(1);
    }
    // fprintf() is used to write data to a file
    fprintf(filePointer, "\nNumber of lines: %d", getCount(filePointer));
    fclose(filePointer);
}
char *returnString(FILE *filePointer, int line, char *str)
{
    filePointer = fopen("a.txt", "r");
    if (filePointer == NULL)
    {
        printf("File not found!");
        exit(1);
    }
    int count = 0;
    while (fgets(str, 100, filePointer) != NULL)
    // fgets reads 100 chars at at a time
    //  and if there are less than 100 chars in the file
    //  then it will read till the end of the file
    {
        count++;
        if (count == line)
            return str;
    }
    fclose(filePointer);
}
void addString(FILE *filePointer, char *str)
{
    filePointer = fopen("a.txt", "a");
    if (filePointer == NULL)
    {
        printf("File not found!");
        exit(1);
    }
    fputc('\n', filePointer);
    fputs(str, filePointer);
    // fputs writes a string to the file pointed to by filePointer
    fclose(filePointer);
}
void addChar(FILE *filePointer, char ch)
{
    filePointer = fopen("a.txt", "a");
    if (filePointer == NULL)
    {
        printf("File not found!");
        exit(1);
    }
    fputc('\n', filePointer);
    fputc(ch, filePointer);
    // fputc writes a character to the file pointed to by filePointer
    fclose(filePointer);
}
void copyFile(FILE *filePointer)
{
    filePointer = fopen("a.txt", "r");
    if (filePointer == NULL)
    {
        printf("Error In Opening File!");
        exit(1);
    }
    FILE *newFilePointer;
    newFilePointer = fopen("b.txt", "a");
    if (newFilePointer == NULL)
    {
        printf("Error In Opening File!");
        exit(1);
    }
    char copy;
    while ((copy = fgetc(filePointer)) != EOF)
    {
        fputc(copy, newFilePointer);
    }
    fclose(filePointer);
    fclose(newFilePointer);
}
void scanFile(FILE *filePointer)
{
    filePointer = fopen("a.txt", "r");
    if (filePointer == NULL)
    {
        printf("Error In Opening File!");
        exit(1);
    }
    char str[100];
    while (fscanf(filePointer, "%s", str) != EOF)
    // fscanf reads a string from the file pointed to by filePointer
    // fscanf increments the file pointer to the next string every iteration
    {
        printf("%s \n", str);
    }
    fclose(filePointer);
}
// ! OPENING MODES
// "r" - read mode
// "w" - write mode -> overwrites the previous data
// "a" - append mode -> writes from the end of the file
// "r+" - read and write mode -> doesnot overwrites the previous data
// "w+" - read and write mode -> overwrites the previous data
// "a+" - read and write mode -> writes from the end of the file

// ! Command Types
// fgetc() - reads a character from the file
// fputc() - writes a character to the file
// fgets() - reads a string from the file
// fputs() - writes a string to the file
// fprintf() - writes formatted output to the file
// fscanf() - reads formatted input from the file

int main()
{
    FILE *filePointer;
    int count = getCount(filePointer);
    printf("Number of lines: %d", count);

    appendFile(filePointer);

    char str[100];
    char *ptr = returnString(filePointer, 2, str);
    printf("\n%s", ptr);

    addString(filePointer, "SexGod");
    addChar(filePointer, 'y');

    //! copy contents of a file
    copyFile(filePointer);

    //! scan contents of a file
    scanFile(filePointer);
    return 0;
}