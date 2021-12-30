#include <stdio.h>
int main(){
    int i, j, a, temp;
    printf("Enter a number : "); scanf("%d",&i);
    temp=i;
    while (i>0){
        a=i%10;
        i=i/10;
        j=(j*10)+a;
    }
    if (j==temp)
        printf("Number is a palindrome number.");
    else
        printf("Number is not a palindrome number.");
    return 0;
}
