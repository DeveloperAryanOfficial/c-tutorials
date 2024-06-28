#include<stdio.h>
#include<stdlib.h>
int main ()
{
    system("cls");
    FILE *ptr=NULL;
    char string[100]="This is bad file in my computer";
    

        // Reading a file 
        // ptr = fopen("file.txt","r");
        // // fprintf(ptr,"%s",string);
        // fscanf(ptr,"%s",string);
        // printf("The content of this file is : %s",string);
        // fscanf() function is terminated after the white space 


        // Writing a file 
        // ptr = fopen("file.txt","w");
        // fprintf(ptr,"%s",string);


    // Append a file
    ptr = fopen("file.txt","a");
    fprintf(ptr,"%s",string);
    


    fclose(ptr);
return 0;
}