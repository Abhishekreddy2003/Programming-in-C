#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter numbers a, b and c --> ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && b<c)
        printf("\nMinimum is b=%d.",b);
    else if (a<c)
        printf("\nMinimum is a=%d.",a);
    else
        printf("\nMinimum is c=%d.",c);
}