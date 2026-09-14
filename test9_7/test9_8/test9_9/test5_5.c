#include <stdio.h>
#include <string.h>

int main(void)

{
    char str1[80] = "blueberry";
    char str2[80] = "grape";
    char *ps1 = "melon";
    char *ps2 = str2;

    printf(" blueberry의 주소값 : %p\n", "blueberry");

    printf("최초 문자열 : %s\n", str1);
    strcpy(str1,str2);
    printf("바뀐 문자열 : %s\n", str1);

    printf(" blueberry의 주소값 : %p\n", "blueberry");

    strcpy(str1, ps1);
    printf("바뀐 문자열 : %s\n", str1);

    printf(" blueberry의 주소값 : %p\n", "blueberry");

    strcpy(str1,ps2);
    printf("바뀐 문자열 : %s\n", str1);
    printf(" blueberry의 주소값 : %p\n", "blueberry");
    
    strcpy(str1,"coffee");
    printf("바뀐 문자열 : %s\n", str1);

    printf(" blueberry의 주소값 : %p\n", "blueberry");
    return 0;

}