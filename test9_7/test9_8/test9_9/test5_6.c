#include <stdio.h>
#include <string.h>

int main(void)

{
    char str1[20] = "blue sky";
    char str2[5] = "black";
    
    strncpy(str1,str2,4);

    printf("%s\n",str1);

    return 0;

}