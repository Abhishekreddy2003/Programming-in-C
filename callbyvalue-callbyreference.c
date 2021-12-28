#include <stdio.h>
int sum1(int *i, int *j){
    printf("%d is the sum of %d and %d",*i+*j,*i,*j);
}
int sum2(int k, int l){
    printf("%d is the sum of %d and %d",k+l,k,l);
}
int main(){
    int a=10,b=20;
    //call by reference
    sum1(&a,&b);
    printf("\n\n");
    //call by value
    sum2(a,b);
}
