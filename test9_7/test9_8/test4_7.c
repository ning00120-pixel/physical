#include <stdio.h>

int my_strlen(const char *str)
{    
    int count = 0;
    while ( *str != '\0')
{
    str ++;
    count ++;
}
    return count;
}

int main()
{
char str[100];

printf("Enter a string (문자열을 입력하세요) : ");
scanf("%s",str);

printf("Length of string (문자열 길이) : %d ",my_strlen(str));

return 0;
}
