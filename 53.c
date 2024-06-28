#include<stdio.h>
int main ()
{
    FILE * ptr = NULL;
    // ptr = fopen("myfile.txt","w");       delete all data 
    // ptr = fopen("myfile.txt","r+");      It covered string lenght character
    // ptr = fopen("myfile.txt","w+");      delete all data 
    // ptr = fopen("myfile.txt","a+");      It append the data withour deleting data    

    // Use of fgetc
    // char * c = fgetc(ptr);
    // printf("The content of the file is : %c\n",c);
    // c = fgetc(ptr);
    // printf("The content of the file is : %c\n",c);


    // Use of fgets
    // char str[30];
    // fgets(str,29,ptr);
    // printf("The content of the file is : %s\n",str);


    // Use of fputc
    // fputc('g',ptr);

    // Use of fputs
    // fputs("Now I am finishing my c programming course for the dsa ",ptr);
    
    fclose(ptr);
return 0;
}