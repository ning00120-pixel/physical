#include <stdio.h>

int main(void)
{
    double m, Tm, Nm, G , n, r, c, SF;

    printf("총 질량[kg] : ");
    scanf("%lf", &m);
    printf("모터 정격토크[Tm] : ");
    scanf("%lf", &Tm);
    printf("구동 모터수[개] : ");
    scanf("%lf", &Nm);
    printf("감속비[G] : ");
    scanf("%lf", &G);
    printf("구동 효율[n] : ");
    scanf("%lf", &n);
    printf("바퀴 반지름 r[m] : ");
    scanf("%lf", &r);
    printf("구름계수[c] : ");
    if (scanf("%lf", &c) != 1 || !(c > 0.015 && c < 0.03)) 
        return 1;
    printf("안전계수[SF] : ");
    if (scanf("%lf", &SF) != 1||SF<=1) return 1;
    
    double Ttot = Nm * Tm * G * n;
    double Favail = Ttot / r;

    printf("총 가용 견인력: %.2f N\n", Favail);
    
    return 0;
}