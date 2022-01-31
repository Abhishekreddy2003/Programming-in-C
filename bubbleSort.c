#include <stdio.h>
int main(){
    int min=0,max=0,temp=0,arr[5];
    printf("Enter arr elements with spaces : ");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    // Bubble sort
    for (int i=0;i<5;i++){  // this loop is to run the next loop x times to get the expected result.
        for (int j=0;j<5-i;j++){
            if (arr[j]>arr[j-1]) {  // swapping the elements by comparing
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    // printing the sorted array
    printf("\nArray after sorting : [ ");
    for (int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf(" ]");
    max=arr[0];
    min=arr[4];
    printf("\nMax of the inputs is : %d\nMin of the inputs is : %d",max,min);
}
