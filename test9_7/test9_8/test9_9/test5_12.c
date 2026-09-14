#include <stdio.h>

int main(void)

{

    int score[4][5];
    int total;
    double avg;
    int i,j;

    for (i=0 ; i < 4; i++)
    {

        printf("5과목의 점수 입력 : ");
        for (j=0 ; j < 5; j++)
        {
            scanf("%d",&score[i][j]);

        }

    }
    for (i = 0; i < 4; i++)
    {
        total = 0;
        for (j = 0; j < 5; j++)
        {
            total += score[i][j];

        }
        avg = total / 5.0;
        printf("총점 : %d, 평균 : %.2lf\n", total,avg);

    }

    return 0;
}