#include <stdio.h>
#include <Stdlib.h>
#include <string.h>
typedef struct astruct
{
    char name[30];
    char rno[15];
    int pno;
} details;
int main(){
    details s1, s2;
    printf("Enter details : ");
    printf("\nName : "); scanf("%s",s1.name);
    printf("Roll Number : "); scanf("%s",s1.rno);
    printf("Phone Number : "); scanf("%d",&s1.pno);
    printf("Enter details : ");
    printf("\nName : "); scanf("%s",s2.name);
    printf("Roll Number : "); scanf("%s",s2.rno);
    printf("Phone Number : "); scanf("%d",&s2.pno);
    printf("Record 1 : Name = %s, R.No = %s, P.No = %d\nRecord 2 : Name = %s, R.No = %s, P.No = %d", s1.name, s1.rno, s1.pno, s2.name, s2.rno, s2.pno);
    return 0;
}