#include <stdio.h>
int main(){
    float a, b, c, d, e;
    printf("Enter the score of subjects a, b, c, d and e here --> ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    printf("\n Total marks = %.2f", a+b+c+d+e);
    printf("\n Average marks = %.2f", (a+b+c+d+e)/5);
    printf("\n Percentage = %.2f Percentage", (a+b+c+d+e)/5);
    return 0;
}
