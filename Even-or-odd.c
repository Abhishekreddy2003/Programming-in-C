#include <stdio.h>
int eno(int i, int j){
    printf("EVN NUMBERS -> ");
    for (int s=i;s<=j;s++){
        if (s%2==0)
            printf("%d ",s);
    }
    printf("\n");
    printf("ODD NUMBERS -> ");
    for (int k=i;k<=j;k++){
        if (k%2!=0)
            printf("%d ",k);
    }
    printf("\n");
}
int main(){
    eno(1,10);
}
