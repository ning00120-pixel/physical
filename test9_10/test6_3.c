#include <stdio.h>

int main(void)

{
    int a = 10;
    int *pi;
    int **ppi; //이중 포인터

    pi = &a;
    ppi = &pi;

    printf("-------------------------------------\n");
    printf("변수    변숫값  &연선   *연산       **연산\n");
    printf("-------------------------------------\n");
    printf("    a%10d%10u\n", a, &a);
    printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
    printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
    printf("-------------------------------------\n");

    return 0;


    
}