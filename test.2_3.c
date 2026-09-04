#include <stdio.h>

int main(void)

{
    int a = 0;
    int i;

    for (i = 0; i<5001; i++)
    {
        a= a+i;
    }
    printf("a = %d\n", a);

}