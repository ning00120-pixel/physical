#include  <stdio.h>

int main(void)

{   
    int i = 0;

    while (1)
    {
        i++;

        if((i%2) ==0)
        {
            continue;
        }
    if(i>10) break;  
    }

    printf("i = %d\n", i);
  
    return 0;
}