#include <stdio.h>

int get_num(void);

int main(void)
{
    int ttt;
    
    ttt = get_num();
    printf("ttt : %d\n", ttt);
    return 0;
}
int get_num(void)
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    return num;
}