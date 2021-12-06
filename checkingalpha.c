#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	char a;
	printf("Enter one character here -> ");
	scanf("%s",&a);
	a=toupper(a);
	int ascii=a;
	switch(ascii>=65 && ascii<=90){
	case 1: printf("It is an alphabet"); break;
	case 0: printf("It is not an alphabet"); break;
	}
}
