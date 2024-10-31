#include <stdio.h>
int main()
{
    int days, start_day;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week(1=Sun, 7=Sat):");
    scanf("%d", &start_day);
    printf(" 日 一 二 三 四 五 六 \n");
    for (int i = 1; i < days + start_day; i++)
    {
        if (i < start_day)
        {
            printf("   ");
        }
        else
        {
            if (i % 7 != 0)
            {
                if (i < 9 + start_day)
                {
                    printf(" %d ", i - start_day + 1);
                }
                else
                {
                    printf(" %d", i - start_day + 1);
                }
            }
            else
            {
                if (i < 9 + start_day)
                {
                    printf(" %d \n", i - start_day + 1);
                }
                else
                {
                    printf(" %d\n", i - start_day + 1);
                }
            }
        }
    }
}