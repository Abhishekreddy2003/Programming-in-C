//storage class
// every variable in C have two properties - 1. Type & 2. storage class
/*
1.Type - refers to the datatype of the variable. Example : int, char, float, .....
2.Storage class - it determines the scope, visibility and life-time of a variable. 
Types of storage class :
a. Automatic 
b. external
c. static
d. register
LOCAL VARIABLE 
*/
#include <stdio.h>
/*int main(){
    for (int i=0; i<5; i++){
        printf("Hello");
    }
    printf("%d",i);
    return 0;
}*/

// when you run the program you'll get the error because i is declared inside the for loop.
/*int main(){
    int n1;  // n1 is a local variable for int main()
}
void main(){
    int n2;  // n2 is local variable for void main()
}*/

// we can not access the n1 variable inside the void main() function. Similarly you can not access the n2 variable in int main()

/*global variable*/
void display()
    int n=5;
int main(){
    ++n;
    display();
    return 0;
}
void display(){
    ++n;
    printf("n = %d",n);
}



