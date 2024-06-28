#include<stdio.h>
int main ()
{
    int age ;
    printf("Enter age : ");
    scanf("%d",&age);
    switch (age)
    {
    case 10:
        printf("YOu are not eligible");
        break;
    case 18:
        printf("YOu are eligible");
        break;
    case 50:
        printf("You are overage");
        break;
    
    default:
        printf("Enter valid value");
        break;
    }
return 0;
}