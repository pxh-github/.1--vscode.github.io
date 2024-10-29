#include <stdio.h>

int main()
{
    int a[10];
    int t[10];
    int times = 0;
    int n[10];
    for (int j = 0; j < 10; j++)
    {
        scanf("%d", &a[j]);
    }
    int max = a[0];
    for (int i = 0; i < 10; i++)
    {
        for (int k = 0; k < 10; k++)
        {
            times = (a[i] > a[k]) ? times + 1 : times;
            n[i] = times;
            t[times] = a[i];
        }
        times = 0;
    }
    for (int p = 0; p < 10; p++)
    {
        printf("%d  ", t[p]);
    }
    return 0;
}