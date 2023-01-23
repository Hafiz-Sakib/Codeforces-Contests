/*

ID : 0222210005101118
Name : Sakib

 */
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    switch (t / 10)
    {
    case 0:
    {
        printf("Very Cold Weather\n");
        break;
    }
    case 1:
    {
        printf("Cold Weather\n");
        break;
    }
    case 2:
    {
        printf("Normal in temp\n");
        break;
    }
    case 3:
    case 4:
    {
        printf("It's Hot\n");
        break;
    }
    default:
    {
        printf("It's Very Hot\n");
        break;
    }
    }

    return 0;
}