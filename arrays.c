/* Multidimensional Array 
Arrays of arrays is called as Multidimensional array
example : int x[3][4] - 3 rows and 4 columns. This is a 2D array.
Initialisation of 2D array by following examples */
/* 
    1. int a[2][3] = { {1,3,0} , {2,4,1} }; 
    2. int a[][3] = { {1,3,0} , {2,4,1} };
    3. int a[2][3] = {1,3,0,2,4,1};
*/
#include <stdio.h>
int main(){
    // int a[2][3] = { {1,3,0} , {2,4,1} };          //first approach
    // int a[][3] = { {1,3,0} , {2,4,1} };          //second approach
    int a[2][3] = {12,13,14,98,87,76};             //third approach
    for (int i=0;i<2;i++){  // for rows
        for (int j=0;j<3;j++){  // for columns
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
