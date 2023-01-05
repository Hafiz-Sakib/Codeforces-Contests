/* Sakib */
#include <stdio.h>
int main()
{
    int n, step = 0;
    scanf("%d", &n);
    for (int i = n; i > 1; i = n)
    {
        if (n % 2 == 0)
        {
            n = (n / 2);
            step++;
        }
        else
        {
            n = (3 * n) + 1;
            step++;
        }
    }
    printf("%d", step);

    return 0;
}