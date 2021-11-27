#include <stdio.h>
int main(){
    int a, b, c;
    printf (" Enter a and b --> ");
    scanf("%d %d", &a, &b);
    printf("a is %d and b is %d (Before Swapping)", a, b);
    c=a;
    a=b;
    b=c;
    printf("\na is %d and b is %d (After Swapping)", a, b);
    return 0;
}