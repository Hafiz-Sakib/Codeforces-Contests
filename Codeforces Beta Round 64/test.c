#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
int main()
{
    char a[] = "saKiB";
    char b[10] = toupper(a);
    printf("%s", b);

    return 0;
}