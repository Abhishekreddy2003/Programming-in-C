#include <stdio.h>
int main(){
    int n1=0,n2=1,n3=n1+n2;
    int r; printf("Enter the no. of the terms you want : "); scanf("%d",&r);
    if (r<=0){
        printf("Enter range properly.");
    }
    else if (r==1){
        printf("%d ", n1);
    }
    else if (r==2){
        printf("%d %d ", n1, n2);
    }
    else{
        printf("%d %d ", n1, n2);
        for (int i=2;i<r;i++){  //loop for runnnig the task
            printf("%d ",n3);
            //swapping the values.
            n1=n2;
            n2=n3;
            n3=n1+n2;
        }
    }
}
