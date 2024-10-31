#include <stdio.h>
int main()
{
    unsigned long long int num;
    unsigned long long int times[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    printf("Enter a number:");
    scanf("%lld", &num);
    while (num >= 1)
    {
        int c = num % 10;
        for (int x = 0; x <= 9; x++)
        {
            if (c == x)
                times[x] += 1;
        }
        num = num / 10;
    }
    printf("Digit:      0 1 2 3 4 5 6 7 8 9 \n");
    printf("Occurrences:");
    for (int i = 0; i <= 9; i++)
    {
        printf("%lld ", times[i]);
    }
    return 0;
}