#include<stdio.h>

// int fib_recursion(int);

int main ()
{
    int a , x=0 ,d, y=1 , sum=0;
    printf("Enter the term : ");
    scanf("%d",&a);
    printf("\n");

    if (a==1 || a==2)
    {
        printf("%d",(a-1));
    }
    d=a-2;

    for (int i = 0; i < d; i++)
    {
        sum = x + y;
        x=y;
        y=sum;
    }
    printf("%d",sum);
    printf("The value of %dth term in fibonacci series is : %d",a,fib_recursion(a));
return 0;
}

int fib_recursion(int n){
    if (n==1 || n==2)
    {
        return (n-1);
    }
    else{
        return fib_recursion(n-1)+fib_recursion(n-2);
    }
    
}