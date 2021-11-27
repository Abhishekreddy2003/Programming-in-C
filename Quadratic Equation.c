#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, d;
    printf("Enter the values  for the equation ax²+bx+c -> ");
    scanf("%d %d %d", &a, &b, &c);
    d=b*b-(4*a*c);
    float r1, r2;
    r1=(-b-sqrt(d))/(2*a);
    r2=(-b+sqrt(d))/(2*a);
    printf("\nRoot 1 of given equation is %.2f ",r1);
    printf("\nRoot 2 of given equation is %.2f ",r2);
    return 0;
}