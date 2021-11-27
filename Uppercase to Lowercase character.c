#include <stdio.h>
#include <string.h>
int main(){
    char a;
    int b;
    printf("Enter character here - ");
    scanf("%c", &a);
    b=a+32;
    printf("\n%c charcter in upper case is -> %c in lower case. ", a, b);
    return 0;
}
