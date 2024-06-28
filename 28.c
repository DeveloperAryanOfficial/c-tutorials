#include<stdio.h>

int sub_add(int *, int *);

int main ()
{
    int a=9 , b=8 ;
    printf("The value of a is : %d and the value of b is : %d",a,b);
    printf("\n");

    sub_add(&a,&b);
    printf("The value of a is : %d and the value of b is : %d",a,b);

return 0;
}

int sub_add(int * a , int * b){
    int sum=0, sub;
    sum = *a + *b;
    sub = *a - *b;
    *a=sum;
    *b=sub;
return *a , *b;
}