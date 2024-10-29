#include <stdio.h>
int main()
{
    int a[5];
    printf("Please input\n");
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 1; j <= 5; j++)
    {
        printf("%d    ", a[j]);
    }
    printf("\n");
    return 0;
}