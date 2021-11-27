#include <ctype.h>
#include <stdio.h>
int main(){
	int j = 0, c;
	char str[20];
    printf("Enter String --> ");
    scanf("%s", str);
	char ch;
	printf("\n What do you want to do? \n  1. Conversion from uppercase to lowercase. \n  2. Conversion of lowercase to uppercase \n  Enter choice here :- ");
    scanf("%d",&c);
    switch(c){
    case 1:
        while (str[j]) {
		ch = str[j];
		putchar(tolower(ch));
        j++;
	}
    break;
    case 2:
        while (str[j]){
        ch = str[j];
        putchar(toupper(ch));
        j++;
        }
    break;
    default:
        printf("Enter valid choice!!!");
    }
}
