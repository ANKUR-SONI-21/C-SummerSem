#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Min(int a, int b)
{
    int min = (a < b) ? a : b;
    return min;
}
void Xstrcat(char *target, char *source)
{
    int index = strlen(target);
    for (int i = 0; i < strlen(source); i++)
    {
        target[index + i] = source[i];
    }
}
void Xstrcmp(char *target, char *source)
{
    int minLen = Min(strlen(source), strlen(target));

    int val, j;
    for (j = 0; j < minLen; j++)
    {
        if (target[j] != source[j])
        {
            val = target[j] - source[j];
            printf("%d", val);
            break;
        }
    }
    if (j >= minLen)
    {
        val = target[j] - source[j];
        printf("%d", val);
    }
}
int main()
{
    //! recreating
    //* strcmp - string compare
    //* strcat - string concatinate
    char name1[] = "Ankur Soni ";
    char name2[] = "is Noob!";
    Xstrcat(name1, name2);
    // printf("\nNew String is : %s", name1);
    Xstrcmp("Ankur", "Ankuk  Soni");
    return 0;
}