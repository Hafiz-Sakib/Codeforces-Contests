#include <stdio.h>

int main(void)
{
    int a, b, c, temp, r;
    scanf("%d %d %d", &a, &b, &c);
    temp = a ^ ((a ^ b) & -(a < b));
    r = c ^ ((c ^ temp) & -(c < temp));
    printf("%d", r);
    return 0;
}