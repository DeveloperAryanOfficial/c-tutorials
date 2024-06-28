#include<stdio.h>

// typedef struct student{
//     int id;
//     int marks;
//     char fav_char;
//     char name[20];
// }std;

int main ()
{
    // int * a, b;
    typedef int* intpointer;
    intpointer a,b;
    int c=5;
    a = &c;
    b = &c;
    printf("The address of c is %p\n",a);
    printf("The address of c is %p\n",b);



    // std s1,s2;
    // s1.id=9;
    // s2.id=6;
    // printf("first student id is %d\n",s1.id);
    // printf("Second student id is %d\n",s2.id);



    // typedef <previous_name> <new_name>
    // typedef unsigned long ul;
    // ul a , b;

return 0;
}