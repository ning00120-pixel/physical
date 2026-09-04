#include <stdio.h>

int main(void)
{
    int score[5];
    int i;
    int total = 0;
    double avg;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &score[i]);

    }
    avg = (double)total / 5;
    for (i = 0; i < 5; i++)
    {
        total += score[i];
    }
for (i = 0; i < 5; i++)
{
    printf("%5d", score[i]);
}
printf("\n");

printf("평균 : %.1lf\n", avg);

return 0;
}
