#include <stdio.h>
int isprime(int i){
    int p[4]={2,3,5,7},k,s;
    for (k=0;k<=4;k++){
        if (i%p[k]!=0){
            s = 0;
        } else if(i==p[k]){
            s = 0;
            break;
        } else{
            s = 1;
            break;
        }
    }
    if (s==0){
        printf("Number %d is prime.",i);
    } else{
        printf("Number %d is not a prime number.",i);
    }
}
int armstrong(int num){
    int i,j,sum,temp;
    temp=num;
    while(temp>=1){
        i=temp%10;
        j=i*i*i;
        sum+=j;
        temp=temp/10;
    }
    if (sum==num){
        printf("Number %d is armstrong.",num);
    }
    else{
        printf("Number %d is not armstrong",num);
    }
}
int perfnum(int n){
    int b,a=0;
    if (n%2==0){
        for (b=n/2;b>=1;b--){
            if (n%b==0){
                a+=b;
            }
        }
    }
    if (n==a){
        printf("%d is a perfect number.",n);
    }
    else{
        printf("%d is not a perfect number.",n);
    }
}
int main(){
    int inputnum;
    printf("Enter a number -> "); scanf("%d",&inputnum);
    isprime(inputnum); printf("\n");
    armstrong(inputnum); printf("\n");
    perfnum(inputnum); printf("\n");
}
