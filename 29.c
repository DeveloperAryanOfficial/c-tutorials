#include<stdio.h>

// int MarksAverage(int *marks){
//     int sum=0,avg;
//     for (int i = 0; i < 5; i++)
//     {
//         sum = sum + *(marks+i);
//     }
    
//     avg = sum/5;
//     *(marks+1)=34;
//     return avg;  
// }


void function(int array[]){
    for (int i = 0; i < 5; i++)
    {
        printf("Marks at index %d is %d .\n",i,array[i]);
    }
    
}
int main ()
{
    // int StudentMarks[5];
    // printf("Enter you marks : \n\n");
    // for (int i = 0; i < 5; i++)
    // {
    //    scanf("%d",&StudentMarks[i]);
    // }

    // printf("Your average number is : %d",MarksAverage(StudentMarks));
    // printf("\n");
    // printf("Your average number is : %d",MarksAverage(StudentMarks));
    
    int Aryan[]={98,99,97,96,90};
    function(Aryan);
    
return 0;
}