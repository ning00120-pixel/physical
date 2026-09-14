#include <stdio.h>

void swap(int *pa,int *pb);

int main (void)
{
    int pa, pb;


    printf("첫번째 사람 나이 :");
    scanf("%d",&pa);
    printf("두번째 사람 나이 :");
    scanf("%d",&pb);
    swap(&pa, &pb);
    printf("첫번째 사람 나이 %d:",pa);
    printf("두번째 사람 나이 %d:",pb);

    return 0;

}

void swap(int *pa,int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;


}
