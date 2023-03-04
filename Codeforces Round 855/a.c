#include <stdio.h>

int main()
{
    char a[1000];
    scanf("%[^\n]", a);
    int i = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a')
        {
            break;
        }
    }

    printf("First Occurance Position is = %d\n", i + 1);

    return 0;
}