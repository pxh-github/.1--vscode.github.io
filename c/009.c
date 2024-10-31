#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    unsigned long long int a[num][num];
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                a[i][j] = 1;
            }
            if (j == i)
            {
                a[i][j] = 1;
            }
            else if (i >= 1 && j >= 1)
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }
    for (int m = 0; m < num; m++)
    {
        for (int n = 0; n <= m; n++)
        {
            if (n == m)
            {
                printf("%lld \n", a[m][n]);
            }
            else
            {
                printf("%lld ", a[m][n]);
            }
        }
    }
    return 0;
}