#include <stdio.h>
int main(){
    int a, b, *p1=&a, *p2=&b;
    printf("Enter values of a and b here -> "); scanf("%d %d",&a,&b);
    printf("Sum of given Numbers a and b is = %d", *p1+*p2);
}
