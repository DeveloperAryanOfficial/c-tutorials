// #include<stdio.h>


// int fact(int a){

//     int it=a-1 , fact=1;
//     for (int i = 0; i < it; i++)
//     {
//         fact = fact*a;
//         a=a-1;
//     }
//     return fact;
// }

// int main ()
// {
//     int a;
//     printf("Enter the value : ");
//     scanf("%d",&a);
//     printf("\n");



//     printf("%d",fact(a));
    
    
// return 0;
// }




#include<stdio.h>

int fact(int a){
    if(a==0 || a==1){
        return 1;
    }
    else{
        return (a*fact(a-1));
    }
}

int main ()
{
    int a ;
    printf("Enter a value you want the factorial of : ");
    scanf("%d",&a);
    printf("\n");

    printf("The factorial of %d is %d .\n",a,fact(a));

return 0;
}