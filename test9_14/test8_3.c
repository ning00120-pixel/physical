#include <stdio.h>

typedef struct{
    double left; 
    double right;

}WheelSpeed;

typedef struct{
    double linear;
    double angular;
}RobotSpeed;

struct Robot Speed compute Speed(struct WheelSpeed w, double wheel_radius,
double wheel_distance);

int v,w,R,L,wr,wl;

int main(void)
{
    v = R*(wr+wl)/2;
    w = R*(wr-wl)/2;

    printf("왼쪽 바퀴 속도 : ");
    scanf("%.1f",&wl);
    printf("오른쪽 바퀴 속도 : ");
    scanf("%.1f",&wr);
    printf("바퀴 반지름 : ");
    scanf("%.2f".&R);
    printf("바퀴 간 거리 : ");
    scanf("%.2f",&L);

    printf("왼쪽 바퀴 속도 :%.1f");
    printf("오른쪽 바퀴 속도 : ");
    printf("바퀴 반지름 : ");
    printf("바퀴 간 거리 : ");



}