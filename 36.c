#include<stdio.h>
#include<string.h>

void parser(char *string)
{
    int flag=0;
    int index=0;

     for (int i = 0; i < strlen(string); i++)
     {
        if (string[i]=='<')
        {
            flag=1;
            continue;
            
        }
        else if(string[i]=='>')
        {
            flag=0;
            continue;
            
        }
        if (flag==0)
        {
            string[index] = string[i];
            index++;
        }
        
        
     }
     string[index]='\0';

     while (string[0]==' ')
     {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i]=string[i+1];
        }
        
        
     }
     while (string[strlen(string)-1]==' ')
     {
        string[strlen(string)-1] = '\0';
     }
        
}
int main ()
{
    char str[]="<div>         This is a heading         </div>";
    parser(str);
    printf("....%s....",str);

    
return 0;
}