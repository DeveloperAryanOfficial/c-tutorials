#include<stdio.h>
int main ()
{
    /*
    #define --> To create preprocessor variables , You can use #define 
    #include --> To include any header file and other file directly , YOu can use #include , It have two methods
    #undef --> To disable the define variable , YOu can use #undef
    #ifdef --> If variable is define it is executed other wise does not 
    #ifndef --> It is executed , when variable is not defined 
    #if --> If variables are defined , we can print some code of conduct
    #else --> It variables are not defined , we cant
    #elif --> It is also like else if function .
    #pragma ---> to issue some special commands to the compiler  
       
    */

   printf("File name is %s\n",__FILE__);
   printf("Todays date is %s\n",__DATE__);
   printf("Time now is %s\n",__TIME__);
   printf("Line no is %d\n",__LINE__);
   printf("ANSI : %d\n",__STDC__);

return 0;
}