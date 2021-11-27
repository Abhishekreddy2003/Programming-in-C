#include <stdio.h>
int main(){
    float basic, hra, da, pf, lic;
    printf("Enter the values here Basic - Hra - DA - PF - LIC ---> ");
    scanf("%f %f %f %f %f", &basic, &hra, &da, &pf, &lic);
    printf("\n Net salary = %.2f", basic+hra+da-pf-lic);
    return 0;
}
