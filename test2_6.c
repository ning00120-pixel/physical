#include <stdio.h>

int sum(int a, int b);  

int main(void)
{
    int a = 5, b = 10;
    int result;
    
    result = sum(a, b);
    printf("result : %d\n", result);
    return 0;

}

  int sum (int a, int b);
{
    
        int temp;

    temp = a * b;

    return temp;

}