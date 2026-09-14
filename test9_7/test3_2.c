#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)

{
    
    int N;//데이터 개수

    printf("데이터 개수 : ");
    scanf("%d\n",N);

    int str[N];

    str[N] = rand() % 100+1;
    
    
    if(str[N]<=30)
    printf("경고 : 현재 배터리 잔량%d(%)\n",str[N]);


    else if(str[N]>=35)
    printf("경고 OFF%d\n",str[N]);

    return 0;

}






