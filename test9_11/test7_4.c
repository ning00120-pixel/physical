#include <stdio.h>

struct velocity
{
    int num;
    double km;

};

int main(void)
{   
    struct velocity s1;
    
    s1.num = 1;
    s1.km = 80.1;
    printf("번호 : %d\n", s1.num);
    printf("속도 : %.1lf[km/h]\n", s1.km);

    struct velocity s2;
    s2.num = 2;
    s2.km = 60.146584513;
    printf("번호 : %d\n", s2.num);
    printf("속도 : %.1lf[km/h]\n", s2.km);

    return 0;
    
}