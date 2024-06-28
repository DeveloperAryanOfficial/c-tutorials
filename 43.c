#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a =34;
    float b = 5.3;
    void * ptr;
    ptr = &a ;
    printf("The value of a is %d.\n",*((int*)ptr));  // It is not directly dereferenced
    ptr = &b ;
    printf("The value of b is %.1f.\n",*((float*)ptr));
    
return 0;
}