#include <stdio.h>
#include <stdlib.h>
struct complex
{
    int imag;
    float real;
};
struct number
{
    struct complex comp;
    int integers;
} num1, num2;
int main()
{
    // initialize complex variables
    num1.comp.imag = 11;
    num1.comp.real = 5.25;
    // initialize number variable
    num1.integers = 6;
    // print struct variables
    printf("Imaginary Part: %d\n", num1.comp.imag);
    printf("Real Part: %.2f\n", num1.comp.real);
    printf("Integer: %d", num1.integers);
    return 0;
}
