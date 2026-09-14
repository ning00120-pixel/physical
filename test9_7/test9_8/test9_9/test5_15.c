#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int score [2][5][5];
    int i,j,k;

    for ( i = 0 ; i < 2 ; i++)

    {
        if (i == 0)
    {
        for (j = 0; j<5 ; j++)

        {
            for (k = 0; k<5 ; k++)
            if (j==k)
            printf("*");
            else
            printf("  ");
            printf("\n");       
        }
        printf("\n");
    }


    else 
    {   
        for (j = 0; j<5 ; j++)

        {
            for (k = 0; k<5 ; k++)
            if (abs(j+k) == 4)
            printf("*");

            else printf("  ");
            printf("\n");      
        }
    
       printf("\n");

    }

    }
    return 0;
}


