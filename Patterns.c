#include <stdio.h>
int main(){
    int a,b,n=1;
    for (a=0;a<=5;a++){
        for (b=0;b<a;b++)
            printf("* ");
        printf("\n");
    }
    printf("\n");
    for (a=65;a<=69;a++){
        for (b=65;b<=a;b++)
            printf("%c",a);
        printf("\n");
    }
    printf("\n");
    for (a=65;a<=69;a++){
        for (b=65;b<=a;b++)
            printf("%c",b);
        printf("\n");
    }
    printf("\n");
    for (a=1;a<=4;a++){
        for (b=1;b<=a;++b){
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
}
