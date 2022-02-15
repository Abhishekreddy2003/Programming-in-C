#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file;
    file = fopen("C:/Users/LENOVO/Desktop/Computer Science/Unit-1(basicsLinks).txt", "a"); // r for reading
    if (file == NULL)
    {
        printf("File Contains no data");
    }
    char link[1000];
    /*writing*/
    strcpy(link,"Programiz link for file append concept is : https://forums.codeguru.com");
    fprintf(file, "\n%s", link); // it is not for appending, it is for writing.
    // fputs(link,file);
    /*reading*/
    // fscanf(file,"%s",&link);
    // printf("Link in line 1 is %s",link);
    fclose(file);
    return (0);
}