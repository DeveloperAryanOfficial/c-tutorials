#include<stdio.h>
int main ()
{
    // char a = 34 ;
    // char * ptr = &a;
    // printf("%d\n",ptr);
    // printf("%d",ptr-2);


    int arr[5]={3,5,6,7,8};
    int * ptr = arr;
    printf("The address of array is : %x\n",arr);
    printf("The address of array is : %x\n",arr);
    printf("The address of array is : %x\n",&arr[0]);
    printf("The address of array is : %x\n",&arr[1]);
    printf("The address of array is : %x\n",(arr+1));
    printf("The address of array is : %x\n",(arr+2));
    printf("The address of array is : %x\n",&arr[2]);   

    // fib 22
    // fib 20 + fib 21
    // fib 19 + fib 18 + fib 20 + fib 19
    // fib 18 + fib 17 + fib 17 + fib 16 + fib 19 + fib 18 + fib 18 + fib 17




return 0;
}