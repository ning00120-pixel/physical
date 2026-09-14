#include <stdio.h>

struct student
{
    char ch1;
    short num;
    char ch2;
    int score;
    double grade;
    char ch3;
};
int main(void)

{
    
    printf("size : %zu\n", sizeof(struct student));

    return 0;
}