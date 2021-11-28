#include <stdio.h>
int main(){
    int n,b,a=0;
    printf("Enter number n --> ");
    scanf("%d",&n);
    if (n%2==0){
        for (b=n/2;b>=1;b--){
            if (n%b==0){
                a+=b;
            }
        }
    }
    if (n==a){
        printf("Perfect number.");
    }
    else{
        printf("Not Perfect.");
    }
}
