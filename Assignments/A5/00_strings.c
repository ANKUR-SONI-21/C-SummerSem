#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[30];
    printf("Enter the string!\n");
    for (int i = 0; i < 29; i++)
    {
        // scanf("%c", &string[i]);
    }
    for (int i = 0; i < 29; i++)
    {
        // printf("%c", string[i]);
    }
    //! Declaration
    char greetings[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; //^ \0 is used for ending the strings
    //! Printing in one line
    printf("%s", greetings);
    //! scanf for multiword is not possible
    char name[25];
    scanf(" %s", name);
    printf("%s", name);
    //^ only prints ankur
    //! the way out
    scanf("%[^\n]s", name);
    printf("%s", name);
    return 0;
}