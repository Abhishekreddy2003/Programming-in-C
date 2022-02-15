#include <stdio.h>
#include <stdlib.h>
struct playingWithStuct
{
    char name[20];
    float rating;
    int neg;
};
int main()
{
    struct playingWithStuct p1, p2;
    printf("Enter Name : "); scanf("%s",p1.name);
    printf("Enter negative values : "); scanf("%d",p1.neg);
    printf("Enter Rating : "); scanf("%f",p1.rating);
    p2=p1;
    printf("%s",p2.name);
}
// https://github.com/Sreemannarayana15/C_Programs.git