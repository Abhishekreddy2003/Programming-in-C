#include <stdio.h>
int main(){
    float a, b;
    printf("Enter two angles A and B --> ");
    scanf("%f %f", &a, &b);
    printf("\nThird angle of the triangle is %.2f°", 180-(a+b));
    return 0;
}