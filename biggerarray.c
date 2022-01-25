#include <stdio.h>
int main(){
    // 10 rollnumbers , their subject names and marks
    int student[10][4] = {{1,4,5,68},{34,4,3,90},{14,2,3,99},{128,1,2,99},{1,4,5,91},{1,4,5,68},{34,4,3,90},{14,2,3,99},{128,1,2,99},{1,4,5,91}};
    // for (int i=0;i<10;i++){
    //     for (int j=0;j<4;j++){
    //         printf("%d   ", student[i][j]);
    //     }
    //     printf("\n");
    // }
    int row; 
    printf("Enter the row : "); 
    scanf("%d",&row);
    for (int k=0;k<4;k++){
        printf("%d ",student[row-1][k]);
    }
}
