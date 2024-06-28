#include<stdio.h>
#include<string.h>

union student
{
    int id;
    int marks;
    char fav_char;
    char name[12];
};

int main ()
{
    
    union student s1,s2;
    // s1.id=1;
    // s1.marks=45;
    s1.fav_char='3';
    s2.id=1;

    // strcpy(s1.name,"Aryan yadav");
    
    // printf("The id is %d and his marks is %d and His favourite character is %c and His name is %s",s1.id,s1.marks,s1.fav_char,s1.name);
    printf("The id is %d\n",s2.id);
    // printf("The marks is %d\n",s1.marks);
    printf("The favourite character is %c\n",s1.fav_char);
    // printf("The name is %s\n",s1.name);
return 0;
}