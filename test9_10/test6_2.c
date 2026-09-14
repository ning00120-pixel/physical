#include <stdio.h>

int main(void)
{

int ary[6][6];
int i,j;
int sum;


    for (i = 0 ; i <5 ; i++)
    { 
        for (j = 0; j<5 ; j++)
        {
        ary[i][j] = i * 5 +j+1;
        printf("%3d",ary[i][j]);

        }
        printf("\n");
    }
     
     for (i = 0 ; i <5 ; i++)
        { sum = 0;
            for (j = 0; j<5 ; j++)
            { 
                sum = sum +ary[i][j];
            }
            ary[i][5] = sum;
        }
    
    for(i = 0; i<5; i++)
            
        {   
            for (j = 0; j<6; j++)

           { 
                printf("%5d",ary[i][j]);
            }
            
            printf("\n");
        }
       
        
        
        
    return 0;
    
    }