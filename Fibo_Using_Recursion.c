#include <stdio.h>
int fibo(int r){
	int n1=0, n2=1, n3=n1+n2;
	if (r==0){
		return n1;
	}
	else if (r==1){
		return 1;
	}
	else {
		return fibo(r-1)+fibo(r-2);
	}
}
int main(){
	int a,b; printf("Enter the number of ouputs you want : "); scanf("%d",&b);
	for (a=0;a<=b;a++){
		printf("%d ",fibo(a));
	}
}
