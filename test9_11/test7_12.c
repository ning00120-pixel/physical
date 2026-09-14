#include <stdio.h>

typedef struct 
{
    int num;
    char name[20];
    int kor;
    int eng;
    int math;
    int sum;
    double avg;
    char grade;

}address;

int main(void)
{
    address list[5] = 
    {
        {315,"홍길동",80,75,90,245,81.7,'B'},
        {316,"이순신",88,92,100,280,93.3,'A'},
        {317,"서하윤",95,99,98,292,97.3,'A'},
        {318,"유관순",84,70,72,226,75.3,'C'},
        {319,"박신혜",60,65,40,165,55.0,'F'},

    };

    
 int i;

    for (i = 0; i < 5 ; i++)
    {
        printf("학번 : %d\n",list[i].num);
        printf("이름 : %s\n",list[i].name);
        printf("국어, 영어, 수학 점수 : %d %d %d\n",list[i].kor,list[i].eng,list[i].math);
    }


    printf("정렬 전 데이터 . . .\n");

    for (i=0; i < 5 ; i++)
    {
        
        printf("%d %s %d %d %d %d %.1lf %c\n",list[i].num,list[i].name,list[i].kor,list[i].eng,list[i].math,list[i].sum,list[i].avg,list[i].grade);
    }

    printf("정렬 후 데이터 . . .\n");

    address tmp;
    int j;

    for (i = 0; i<5 ; i++)
        {
           for (j = 0; j<4 ; j++)
           
           {if(list[j].avg < list[j+1].avg)
                {
                    address tmp = list[j];
                    list[j] = list[j+1];
                    list[j+1] = tmp;
                }   

           }
           

        }

    for (i = 0; i<5 ; i++)
    {
        printf("%d %s %d %d %d %d %.1lf %c\n",list[i].num,list[i].name,list[i].kor,list[i].eng,list[i].math,list[i].sum,list[i].avg,list[i].grade);
    }

    return 0;
}