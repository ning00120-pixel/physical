#include <stdio.h>
#include <string.h>

int count1 =0;
int count2 =0;
int res;

int main(void)


{
    FILE *fp;
    char str[200];

    fp = fopen("log.txt","r");


    if(fp ==NULL)
    {
        printf("출력 파일을 열지 못했습니다.\n");
        return 1;    
    }

    while(res)

    {   
        res = fscanf(fp,%s,str)==0;


       if(strcmp(str,"[ERROR]") == 0;)
       {
            count1++;
        }
         
        if(strcmp(str,"[WARNING]") == 0);
        {
            count2++;
        }
        

    }
        

        printf("에러 발생 횟수 : %d\n",count1);

        if (count1 >4)
        {
            printf("에러가 과도하게 떴습니다\n");
        }
        

       
        printf("경고 발생 횟수 : %d\n",count2);

        if (count2>1)
        {
            printf("위험 경고!\n");
        }
   
   

}