#include <stdio.h>
int main(){
    char op;
    float n1, n2;
    printf ("Enter the operator you want ( +, -, *, / ) --> ");
    scanf("%c",&op);
    printf("Enter n1 and n2 --> ");
    scanf("%f %f", &n1, &n2);
    switch(op){
        //In case use only single quotation marks.
        case '+':
            printf("%.1f + %.1f = %.1f", n1, n2, n1+n2);
            break;
        case '-':
            printf("%.1f - %.1f = %.1f", n1, n2, n1-n2);
            break;
        case '*':
            printf("%.1f X %.1f = %.1f", n1, n2, n1*n2);
            break;
        case '/':
            printf("%.1f / %.1f = %.1f", n1, n2, n1/n2);
            break;
        default:
            printf("Error!!! Please try again.");
    }
    return 0;
}

