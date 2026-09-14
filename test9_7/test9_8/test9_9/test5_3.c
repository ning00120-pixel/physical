#include <stdio.h>

int main (void)

{
    char *dessert = apple;


    printf("오늘 디저트는 %s 입니다.\n",dessert);
    printf(" apple의 주소값 : %p\n", "dessert");
    
    dessert = "banana";
    printf("오늘 후식은 %s 입니다.\n",dessert);

    return 0;




}