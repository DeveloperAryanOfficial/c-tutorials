#include<stdio.h>
int main ()
{
    int a;
    printf("Enter the number, whose table you want : ");
    scanf("%d",&a);

    printf("\n");

    for (int i = 1; i < 11; i++)
    {
       printf("%d X %d = %d",a , i , a*i);
       printf("\n");
    }
    
    
return 0;
}