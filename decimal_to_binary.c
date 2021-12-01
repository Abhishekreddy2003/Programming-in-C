#include <stdio.h>
int main(){
    int a,b[32],i=0;
    printf("enter a number -> ");
    scanf("%d",&a);
    printf("Binary of %d is ",a);
    while ( a > 0 ){
        b[i]=a%2;
        a=a/2;
        i++;
    }
    for (int j = i-1; j>=0; j--){
        printf("%d",b[j]);
    }
}
