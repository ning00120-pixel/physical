#include <stdio.h>

int main(void)
{
    int i = 2;

    for (int i =2; i<20; i++)
    {
        for (int j = 1; j<20; j++)
        {
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n");

    }
    return 0;
}