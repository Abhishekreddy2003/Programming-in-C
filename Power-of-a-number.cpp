#include <stdio.h>
#include <math.h>
int power(int bn, int exp){
	int pn;
	pn=pow(bn,exp);
	printf("%d(th) power of %d is %d",exp,bn,pn);
	return(0);
}
int main(void){
	int bn,exp;
	printf("Enter base number and exponent here -> ");
	scanf("%d %d",&bn,&exp);
	power(bn,exp);
}
