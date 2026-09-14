#include <stdio.h>

int main (void)


int a = 10, b = 20;
{
{
    int a, b, temp;

    temp = a;
    a = b;
    b = temp;

    printf("주소값 : %p\n",a);
}
return 0;
}
