#include <stdio.h>
int main(void)
{
    int i = 0;
    int *p = &i;
    printf("i=%d,*p=%d\n&i=%p\n p=%p\n", i, *p, &i, p);
    return 0;
}