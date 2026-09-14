#include <stdio.h>

typedef struct{
    int x;
    int y;
}position;

void move(position *p, int dx, int dy);

int main(void)

{
    position robot = {0,0};
    int dx, dy;

    
    printf("이동량 dx dy 입력 :");

    scanf("%d %d",&dx,&dy);

    move(&robot, dx, dy);

    printf("로봇 최종 위치 :%d %d",robot.x,robot.y);

    return 0;
}

void move(position *p, int dx,int dy)
{
    p->x += dx;
    p->y += dy;    

}

