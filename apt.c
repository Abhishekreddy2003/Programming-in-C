// Comparison of two structures
#include <stdio.h>
struct apt
{
    int flon; // floor number
    int flan; // flat number
    char name[20];
    float units; // number of units consumed
};
int main()
{
    int uc = 7, m; // unit cost
    struct apt a1, a2, a3;
    printf("\nEnter flat details : \nFloor Number : ");
    scanf("%d", &a1.flon);
    printf("Flat number : ");
    scanf("%d", &a1.flan);
    printf("Name : ");
    scanf("%s", &a1.name);
    printf("Units consumed : ");
    scanf("%f", &a1.units);
    printf("\nEnter flat details : \nFloor Number : ");
    scanf("%d", &a2.flon);
    printf("Flat number : ");
    scanf("%d", &a2.flan);
    printf("Name : ");
    scanf("%s", &a2.name);
    printf("Units consumed : ");
    scanf("%f", &a2.units);
    m = ((a1.flon == a2.flon) && (a1.flan == a2.flan))?1:0; //FIXME: "==" here
    if (m == 1)
    {
        printf("We are same.");
    }
    else
    {
        printf("we are not same.");
    }
}