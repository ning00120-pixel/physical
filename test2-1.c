#include <stdio.h>
#include <math.h>


int main(void)
{
    double r, W, eL, eR, L , N;

    scanf("%lf, %lf, %lf, %lf, %lf, %lf", &r, &W, &eL, &eR, &L, &N)

    double rL = r*(1+eL);
    double rR = r*(1+eR);
    double DL = 2*PI*rL*N;
    double DR = 2*PI*rR*N;
    double Rc = (W/2)*(DL+DR)/(DR-DL);
    double delta_rad = L/Rc;
    double dd = Rc*(1-cos(delta_rad));

    printf("좌우 바퀴 유효 이동거리 : %.4f\n", DL);
    printf("곡선 궤적 : %.2f\n", Rc);
    printf("편류각 : %.2f\n", delta_rad);
    printf("최종 편류거리 : %.2f\n", dd);

    return 0;
    
}
