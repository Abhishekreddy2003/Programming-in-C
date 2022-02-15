#include <stdio.h>
#include <string.h>
struct astruct
{
    char name[20];
    int number;
    float rating;
};
int main(void)
{
    struct astruct s1 = {"aStructure", 123, 4.5}, s2 = {"anotherStructure", 456, 5.0}, s3 = {"yetAnotherStructure", 789, 5.0};
    // s1={"aStructure",123,4.5};
    // s2={"anotherStructure",456,5.0};
    // s3={"yetAnotherStructure",789,5.0};
    printf("S3 : \n");
    printf("%s\n", s3.name);
    printf("%d\n", s3.number);
    printf("%.2f\n", s3.rating);
}