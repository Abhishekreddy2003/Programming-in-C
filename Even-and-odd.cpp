#include <stdio.h>
int eno(int a){
	if (a%2==0){
		printf("Given number is even.");
	}
	else if (a%2!=0){
		printf("Given number is odd.");
	}
}

int main(void){
	int a;
	printf("Enter a number -> ");
	scanf("%d",&a);
	eno(a);
}
