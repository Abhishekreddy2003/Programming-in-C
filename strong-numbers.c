#include <stdio.h>
int fact(int n){
	int a=1, b;
    for(b=1;b<=n;b++) {
        a*=b;
    }
    return a;
}
int individual(int n){
	int i,j=0,k=0;
	for (i=0;i<=n;i++){
        j=n%10;
        n=n/10;
        k+=fact(j);
        if (n==1){
            k+=1;
        }
	}
	return(k);
}
int main(void){
	int s,e,i;
	printf("Enter start and end --> ");
    scanf("%d %d", &s, &e);
    printf("Strong numbers in range (%d , %d) are :- ",s,e);
    for (i=s;i<=e;i++){
        if (i==individual(i)){
            printf("%d ",i);
        }
    }
}
