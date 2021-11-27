#include <stdio.h>
int main(){
    int j;
    printf("Enter any number: ");
    scanf("%d", &j);
    if(j & 1)
        printf("Least Significant Bit of %d is set (1).", j);
    else
        printf("Least Significant Bit of %d is set (0).", j);
    return 0;
}
