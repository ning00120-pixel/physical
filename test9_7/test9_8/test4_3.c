#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)


{
   int dist[360];
    int min;
    int min_index;
    int i;
    
    srand(time(NULL));

    int r1 = rand() % 500;

    for (i=0 ; i<360 ;i++)

    {
        dist[i] =r1;
    }

    min = dist[0];
    min_index = 0;

    for (i=0 ; i<360 ;i++)
    
    {
        if (dist[i] < min)

    min = dist[i];
    min_index = i;
   
    printf("최소거리 : %d\n", min);
    printf("최소거리 방향 :%d\n ' ",min_index);
    
    }

    return 0;
    }
    

    

