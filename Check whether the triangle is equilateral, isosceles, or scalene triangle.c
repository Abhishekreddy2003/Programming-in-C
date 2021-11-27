#include <stdio.h>
int main(){
    float a, b, c;
    printf("Enter angles of the triangle here --> ");
    scanf("%f %f %f", &a, &b, &c);
    if(a+b+c==180)
        if (a==b==c)
            printf("\nIts an equilateral triangle.");
        else if (a==b || b==c || c==a)
            printf("\nIts an isosceles triangle.");
        else
            printf("\nScalene triangle");
    else
        printf("\nThe given angles does not form a triangle.");
    return 0;
}