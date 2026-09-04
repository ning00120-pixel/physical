# include <stdio.h>

double main(void)
{
    double m = 200, SF = 2.0, DM = 1.2, g = 9.81, c = 0.018;

    double f = c * m * g * SF * DM;
    printf("f = %\n", f);

    double t = 3, G = 0 , R = 0.0107, N = 2;
    double F = (t * N / R);
    
    printf("총하중(kg):",)


    if (f <= F)
    {
        printf("판정 : 합격\n");
    }
    else
    {
        printf("판정 : 불합격\n");
    }
    return 0;

}