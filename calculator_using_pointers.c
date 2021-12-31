#include <stdio.h>
int main(){
    int n1, n2, *pn1=&n1, *pn2=&n2;
    char opt;
    printf("Enter the Operation you want to perform (+,-,*,/) -> "); scanf("%c",&opt);
    printf("Enter two numbers n1 and n2 -> "); scanf("%d %d", &n1, &n2);
    switch(opt){
    case '+': printf("sum of two numbers = %d",*pn1+*pn2); break;
    case '-': printf("Difference of two numbers = %d",*pn1+*pn2); break;
    case '*': printf("Product of two numbers = %d",(*pn1)*(*pn2)); break;
    case '/': printf("quotient of two numbers = %d",(*pn1)/(*pn2)); break;
    default: printf("Enter valid Operator");
    }
    return 0;
}
