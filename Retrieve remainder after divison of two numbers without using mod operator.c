#include <stdio.h>
int main(){
    int a, b, c, d;
    printf("Enter two numbers (a should be greater than b) --> ");
    scanf("%d %d", &a, &b);
    c=a/b;
    d=c*b;
    printf("%d", a-d);
    return 0;
}
