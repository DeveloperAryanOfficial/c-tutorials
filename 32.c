#include<stdio.h>

void ArrayReverse(int arr[]){
    int temp;
    for (int i = 0; i < 5; i++)
    {
        temp = arr[i];
        arr[i]=arr[9-i];
        arr[9-i]=temp;
    }  
    
}

int main ()
{
    int array[]={1,2,3,4,5,6,7,8,9,0};

    for (int i = 0; i < 10; i++)
    {
        printf("%d",array[i]);
    }

    printf("\n");

    ArrayReverse(array);

    for (int i = 0; i < 10; i++)
    {
        printf("%d",array[i]);
    }
    
    
return 0;
}