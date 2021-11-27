#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numbers a, b and c --> ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && a>c)
        printf("a is greater than b and c. ");
    else if (b>a && b>c)
        printf("b is greater than a and c");
    else if (c>b && c>a)
        printf("c is greater than a and b");
    else
        printf("All numbers are equal.");
    return 0;
}