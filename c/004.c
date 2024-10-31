#include <stdio.h>
int main()
{
    double loan, rate, mp;
    printf("Enter amout of loan: ");
    scanf("%lf", &loan);
    printf("Enter interest rate: ");
    scanf("%lf", &rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &mp);
    double p1, p2, p3;
    double month_rate = rate / 12;
    p1 = loan - mp + loan * month_rate / 100;
    p2 = p1 - mp + p1 * month_rate / 100;
    p3 = p2 - mp + p2 * month_rate / 100;
    printf("Balance remaining after first payment: $%.2lf\nBalance remaining after second payment: $%.2lf\nBalance remaining after third payment: $%.2lf", p1, p2, p3);
    return 0;
}