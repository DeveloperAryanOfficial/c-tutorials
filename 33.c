#include<stdio.h>
#include<string.h>

struct student{
    int id;
    int marks;
    char fav_char;
    char name[20];

};
int main ()
{
    struct student aryan , anil;
    strcpy(aryan.name,"Aryan");
    strcpy(anil.name,"Anil");
    aryan.id=1;
    anil.id=2;
    aryan.marks=500;
    anil.marks=501;
    aryan.fav_char='a';
    anil.fav_char='1';

    printf("%d. Total marks of %s %d. And his favourite character is %c\n",aryan.id,aryan.name,aryan.marks,aryan.fav_char);
    printf("%d. Total marks of %s %d. And his favourite character is %c\n",anil.id,anil.name,anil.marks,anil.fav_char);
    
return 0;
}