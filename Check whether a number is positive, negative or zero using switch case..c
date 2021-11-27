//switch("operation") if true=1 , if false=0 //-Sreemannarayana 
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number -> ");
    scanf("%d",&n);
    switch(n>0){//here if n>0 case 1 will get get executed else case 0. Also we can relate 1 as true and 0 as false.
        case 1:
            printf("Number is positive");
        break;
        case 0:
            switch(n<0){
                case 1:
                    printf("Number is negative.");
                    break;
                case 0:
                    printf("Number is equal to 0.");
                    break;
            }
        break;
    }
}