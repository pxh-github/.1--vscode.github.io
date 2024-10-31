#include <stdio.h>
int main()
{
    double origin_num, added_num;
    printf("Enter an amount: ");
    scanf("%lf", &origin_num);
    added_num = origin_num * 1.05;
    printf("with tax added:%.2lf", added_num);
    return 0;
}