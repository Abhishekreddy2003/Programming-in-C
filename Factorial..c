#include <stdio.h>
int main(){
    int a=1, b, n;
    printf("Enter a number to get its factorial. --> ");
    scanf("%d", &n);
    for(b=1;b<=n;b++) {
        a*=b;
    }
    printf("Factorial of %d = %d.",n,a);
    return 0;
}