#include <stdio.h>
int main(){
    int n,n1,b,a=0;
    printf("Enter number n --> ");
    scanf("%d",&n);
    printf("Enter number n2 --> ");
    scanf("%d",&n1);
    for (b=n/2;b>=1;b--){
        if (n%b==0 && n1%b==0){
            printf("%d is the Greatest Common Factor.",b);
            break;
        }
    }
}
