#include <stdio.h>
int fact(int n){
	if (n==0){
		return 1;
	}
	else if (n==1){
		return 1;
	}
	else {
		return n * fact(n-1);
	}
}
int main(){
	int n; printf("Enter a number to get its factorial - "); scanf("%d",&n);
	int k= fact(n);
	printf("%d",k);
}
