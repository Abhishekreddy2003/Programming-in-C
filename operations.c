// apartment -> floorNo, flatNo, name. Find out the the current bill for the attributes for 1 month. Default 1 unit = 7 Rs. Find three flat bills.
#include <stdio.h>
#include <string.h>
struct a1
{
    int flon; // floor number
    int flan; // flat number
    char name[20];
    float units; // number of units consumed
};
int main()
{
    struct a1 a1, a2;
    int uc = 7; // unit cost
    printf("\nEnter flat details : \nFloor Number : ");
    scanf("%d", &a1.flon);
    printf("Flat number : ");
    scanf("%d", &a1.flan);
    printf("Name : ");
    scanf("%s", &a1.name);
    printf("Units consumed : ");
    scanf("%f", &a1.units);
    a2 = a1;
    printf("Values of a2: \nFloor : %d\nFlatNumber : %d\nName : %s\nUnits : %.2f", a2.flon, a2.flan, a2.name, a2.units);
}