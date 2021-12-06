#include <stdio.h>
int main(){
	int a,b,c=0;
	printf("Enter two numbers -> ");
	scanf("%d %d",&a,&b);
	for (c=2;c<=a;c++){
		if (a%c==0 && b%c==0){
			printf("%d is LCM",c);
			break;
		}
	}	
}
