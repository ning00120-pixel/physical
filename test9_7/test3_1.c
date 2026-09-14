#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)

{   
    int str [20];
    int a=0 ,b=0 ,i;

    for(i=0 ; i<20 ;i++)

    {
        str[i] = rand() % 200+1;
    
        printf("%d",str[i]);
    }

    for (i=0 ; i<20; i++)
    { 
        while(abs(str[i] - str[i-1]) >10);

        { 
            str[i] = rand() % 200+1;
        }

    }


    for (i=1 ; i<20; i++)

    {
    
        if(str[i] - str[i-1] >=7)
        a++;
        
        else if(str[i] - str[i-1] <7)
        b++;
    
    } 
    
    printf("급가속 : %d\n",a);
    printf("급제동 : %d\n",b);
    
    return 0;


}