#include <stdio.h>
#include <string.h>

int main(void)

{
    char str1[80] = "black";
    char str2[80] = "yellow";

    
    printf("사전에 먼저 나오는 색깔 :");

    if (strcmp(&str1[1],&str2[1]) <= 0)
        printf("%s\n",&str1[1]);

    else
        printf("%s\n",&str2[1]);

        return 0;

    


}