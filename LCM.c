#include <stdio.h>
int main(){
    int n1, n2;
    printf("Enter two numbers -> "); scanf("%d %d",&n1,&n2);
    for (int i=n2; i<=n2*n1; i++){
        if (i%n2==0 && i%n1==0){
            printf("%d is the LCM of %d and %d",i,n1,n2);
            break;
        }
    }
}
