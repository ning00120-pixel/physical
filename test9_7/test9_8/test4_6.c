#include <stdio.h>

void swap(int *x,int *y)
{
int temp;

temp = *x;
*x = *y;
*y = temp;

}

int main()
{
    int a, b;

printf("enter two integers :");
scanf("%d %d", &a, &b);

printf("a = %d\n, b= %d\n",a,b);
swap(&a,&b);
printf("a = %d\n, b= %d\n",a,b);

return 0;

}





