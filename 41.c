// Auto storage class --- Automatic variables
    // External storage class --- External variables   dont use much.
    // Extern keyword --- External variables
    // Static storage class --- Static variables
    // Register storage class --- Register variables

    // Declaration - Telling the compiler about the variable ( no space reserved )
    // Definition - Declaration and space reservation.









#include<stdio.h>

// USING AUTO KEYWORD---------
// int myfunc(int a , int b)
// {
//     auto int sum=a+b;        This is the automatic variable
//     return sum;
// }



// USING EXTERN KEYWOERD------
// int func()
// {
//     extern int a;
//     return a;
// }

// int a = 55;



int func(){
    static int myvar;
    myvar++;
    printf("%d\n",myvar);

    return myvar;
}

int main ()
{
    
    // printf("Using extern keyword : %d",func()); 
    register int var = func();
     var = func();
     var = func();
     var = func();
     var = func();
     var = func();
     var = func();
     var = func();
     var = func();
     var = func();
     var = func();
    


return 0;
}