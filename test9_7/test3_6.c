#include <stdio.h>

int main(void)

{
    int a = 10;
    int *p = &a;
    int *pd;

    pd = p;

    printf("%lf\n", *pd);

    return 0;



}