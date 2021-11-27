#include <stdio.h>
int main(){
    int j, n, bs;
    printf("Enter any number: ");
    scanf("%d", &j);
    printf("Enter n(th) bit you want to check (1 to 8) here--> ");
    scanf("%d",&n);
    bs=(j >> n) & 1;
    printf("The bit status of integer %d at %d bit is (%d).", j, n, bs);
    return 0;
}
