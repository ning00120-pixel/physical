#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)

{
    int label[16]
    int N;
    int threshold;
    int sum_index;
    double index_avg;


    printf("센서개수 : ");
    scanf("%d\n,N");
    

    for(i=0; i<N ; i++)
 
    threshold[i] = rand() % 1023;

    if(value[i]<=threshold)
    label[i]=1;
    else if label[i]=0;
 
    for(i=0;i<N ; i++)
    sum_index = label[i] + label[i++]
    if (i=N) break; 
    index_avg = sum_index/N;


    printf("N = %d",N);
    printf("value = ");
    printf("threshold =%d\n",threshold[i]);  

    return 0;
}