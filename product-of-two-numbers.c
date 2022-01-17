#include <stdio.h>
int product(int a, int b){
    if (a<b){
        return product(b,a);
    }
    else if (b!=0){
        return (a+product(a,b-1));    /*recursion takes place here. for example let a=4 and b=5. here this process gets executed 
                                        5 times*/
    }
    else{
        return (0);
    }
}
int main(){
    int i,j; printf("enter two numbers to get their product : "); scanf("%d %d",&i,&j);
    int k=product(i,j);
    printf("%d",k);
}
