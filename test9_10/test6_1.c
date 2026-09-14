#include <stdio.h>

int main(void)

{
    char *pary[5];
    int i;

    pary[0] = "dog";
    pary[1] = "elephant";
    pary[2] = "horse";
    pary[3] = "tiger";
    pary[4] = "lion";

    printf("%p\n",(void *)pary[1]);

    return 0;

}