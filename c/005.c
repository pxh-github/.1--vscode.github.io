#include <stdio.h>
int main()
{
    int amount;
    printf("Enter a dollar amount:");
    scanf("%d", &amount);
    int num1 = amount / 20;
    int amount2 = amount - num1 * 20;
    int num2 = amount2 / 10;
    int amount3 = amount2 - num2 * 10;
    int num3 = amount3 / 5;
    int num4 = amount3 - num3 * 5;
    printf("$20 bills:%d\n$10 bills:%d\n$5 bills:%d\n$1 bills: %d\n", num1, num2, num3, num4);
    return 0;
}