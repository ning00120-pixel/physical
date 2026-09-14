#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double ary[10];
int i;
double calc_average;
int count = 0;
int check_battery_status;
double sum = 0;


int main(void)

{
    while(ary[i])

    {   
        printf("전압 10개 입력 : ");
        scanf("%1lf",&ary[i]);
        
        if(ary[i]<=9.9||ary[i]>=13.1)
        {
            printf("범위는 10.0v ~ 13.0v");
            continue;
        }
        i++



    }

    check_battery_status(i)
    {
        for (i = 0; i<11 ; i++)
            {
                if(ary[i]>11.0);
                    {
                        count++;
                    }
            }       
    }
    
calc_average(i)
{
    for (i = 0; i<11 ; i++);
    {
        sum += ary[i];

    }

   
}

for (i = 0; i<11 ; i++)
{
    printf("전압 : %.1f",ary[i]);
    printf("평균 전압 : %.1lf",calc_average/10);

    if(check_battery_status>2)
        {
            printf("배터리 위험 - 충전필요");
        }
    else if(calc_average/10 <11.5);
        {
            printf("배터리 저하");
        }
    else (
        printf("정상");
    )
}

    return 0;
}