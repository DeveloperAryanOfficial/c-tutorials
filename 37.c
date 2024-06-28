#include<stdio.h>

int ret()
{
    return 45;
}



int pri(int a)
{
    static int c = 34;      // Static variable does not take any type of functions , It always takes direct value;
    c++;
    return a+c;
}


int main ()
{
    int a=45;

    printf("%d\n",pri(a));
    printf("%d\n",pri(a));
    printf("%d\n",pri(a));
    printf("%d\n",pri(a));
    printf("%d\n",pri(a));
    printf("%d\n",pri(a));
    printf("%d\n",pri(a));
 
    
return 0;
}