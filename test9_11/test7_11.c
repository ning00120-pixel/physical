#include <stdio.h>
#include <string.h>
struct name
{
    int num;
    char name[20];
};

struct score
{
    struct name pf;
    int kor;
    int eng;
    int math;

};

int main(void)
{

    struct score r1;
    r1.pf.num = 315;
    strcpy(r1.pf.name, "홍길동");
    r1.kor = 80;
    r1.eng = 75;
    r1.math = 90;
    struct score *ps = &r1;

    printf("학번 : %d\n",r1.pf.num);
    printf("이름 : %s\n",r1.pf.name);
    printf("국어, 영어, 수학 점수 : %5d %5d %5d\n",(*ps).kor,(*ps).eng,(*ps).math);


    struct score r2;
    r2.pf.num = 316;
    strcpy(r2.pf.name, "이순신");
    r2.kor = 88;
    r2.eng = 92;
    r2.math = 100;
    ps = &r2;

    printf("학번 : %d\n",r2.pf.num);
    printf("이름 : %s\n",r2.pf.name);
    printf("국어, 영어, 수학 점수 : %5d %5d %5d\n",(*ps).kor,(*ps).eng,(*ps).math);







    return 0;


    
}