#include<stdio.h>
int main ()
{
    int * ptr; // this is a wild pointer so we should not dereferenced it 
    int a ;

    ptr = &a; // ptr no longer wild pointer 
    printf("The address of a is : %p",ptr);
return 0;
}