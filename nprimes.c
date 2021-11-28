#include <stdio.h>
int main(){
    int n,b,a=0;
    printf("Enter number n --> ");
    scanf("%d",&n);
    printf("2  3  5  7  ");
    for (b=8;b<=n;b++){
        for (a=2;a<=b;a++){
            if (b%a!=0 && b%3!=0 && b%5!=0 && b%7!=0){
                printf("%d  ",b);
                break;
            }
            else{
                break;
            }
        }
    }
}
