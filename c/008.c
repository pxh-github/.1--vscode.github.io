#include <stdio.h>
int main()
{
    int num;
    int times = 2;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (times * times <= num)
    {
        printf("%d\n", times * times);
        times += 2;
    }
    return 0;
}