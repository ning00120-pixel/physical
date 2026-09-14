#include <stdio.h>

typedef struct student
{   
    int num;
    double grade;

}Pe;

void print_data(Pe *ps);

int main(void)

{
    Pe s1 = {315, 4.2};

    print_data(&s1);

    return 0;

}

void print_data(Pe *ps)

{
    printf("학번 :%d\n", (*ps).num);
    printf("학점 :%.1lf\n", ps -> grade);
}