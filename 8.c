#include<stdio.h>
int main ()
{
    int a;
    printf("Enter the number for printing a Table : ");
    scanf("%d",&a);
    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d",a,i,a*i);
        printf("\n");
    }
    
return 0;
}