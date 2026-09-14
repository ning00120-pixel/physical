#include <stdio.h>
#include <string.h>

int count = 0;
int i = 0;
int j = 0;
int count1 = 0;
char ch;


int main(void)
{
    FILE *fp;
    char str[999][999];
    char ip[999];

    fp = fopen("fast.log","r");

    if(fp ==NULL)
    {
        printf("출력 파일을 열지 못했습니다.\n");
        return 1;    
    }
{

    while (i < 999 && fscanf(fp, "%c", &ch) == 1)
    {
        if (ch == '\n')
        {
            i++;    
            j = 0;  
        }
        else if (j < 998)
        {
            str[i][j] = ch;
            j++;
        }
    }

    count = i;

    if (i < 999 && j > 0)
    {
        count++;
    }

    fclose(fp);

    for(i = 0; i < count ; i++)

    {
        for(j = 0; str[i][j] != '\0'; j++)
        
    
            if(str[i][j] == 'P'
            &&str[i][j+1] == 'i'
            &&str[i][j+2] == 'n'
            &&str[i][j+3] == 'g')
            {    
                count1++;
            }
    }


    for(i = 0; i < count ; i++)

    {
        for(j = 0; str[i][j] != '\0'; j++)
        { 
        char*strstr(const char str[i][j],"IPv6-ICMP}");   
        }

        

    }



    printf("핑 수 : %d\n",count1);
    printf("동일 ip ping 수 : %d\n",count2);
}

    return 0;
}
