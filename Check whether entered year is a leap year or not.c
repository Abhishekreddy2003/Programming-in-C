#include <stdio.h>
int main(){
    int y;
    printf("Enter year --> ");
    scanf("%d", &y);
    if (y%4==0)
        printf("Given year %d is leap year.",y);
    else
        printf("Given year %d is not a leap year.",y);
    return 0;
}