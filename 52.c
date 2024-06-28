#include<stdio.h>
#include<string.h>

char * replaceWordFunction(const char * string , const char * oldword , const char * newword)
{
    char * resultString;
    int i , count= 0;
    int oldwordlength = strlen(oldword);
    int newwordlength = strlen(newword);

    for (i = 0; string[i] != '\0'; i++)
    {
        /* code */
    }
    

}

int main ()
{
    FILE * ptr = NULL;
    FILE * ptr2 = NULL;
    char string[200];
    ptr = fopen("Letter.txt","r");
    ptr2 = fopen("GeneratedBill.txt","w");
    
    printf("The given bill template was : %s\n",fgets(string,200,ptr));


    // Call the replace word function
    char * newstring = string;
    printf("The actural bill generated is : %s\n",replaceWordFunction(newstring, , ));
    
    fputs(newstring,ptr2);

    

    fclose(ptr);
    fclose(ptr2);

return 0;
}