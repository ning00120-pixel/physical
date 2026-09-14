#include <stdio.h>

double map(double x, double in_min, double in_max,
            double out_min, double out_max)
            
{
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) +out_min;
}


int main(void)

{   
    double in_min,in_max;
    double out_min,out_max;
    double sensor[5];   
    double norm[5]
    int i;

    printf("센서 입력값 : ");
    for (i = 0 ; i < 5 ; i++)
    {
        scanf("%lf",&sensor[i]);
    }

    for ( i = 0; i < 5; i++)
    {
       
    }
    


    printf("센서 입력값 :%1lf",sensor[i]);
    
    printf("입력 범위 : ");
    scanf("%d %d",&in_min,&in_max);
    printf("입력 범위 : %d %d\n",in_min,in_max);

    printf("출력 범위 : ");
    scanf("%d %d",&out_min,&out_max);
    printf("출력 범위 : %d %d\n",out_min,out_max);

    printf("[정규화 결과]"\n);
    printf("센서[i]" = %lf -> 정규화 = %lf,y[i])


return 0;


}
