#include<stdio.h>

// int marksaverage (int marks[5]);

int main ()
{
    int total , aryan[5]={45,67,98,12,45};


    int sum=0, i;
    for ( i = 0; i < 5; i++)
    {
        sum = sum + aryan[i];

    }

    // total = marksaverage(aryan[5]);
    printf("%d",sum);

return 0;
}

// int marksaverage (int marks[5]){

//     int sum=0, i;
//     for ( i = 0; i < 5; i++)
//     {
//         sum = sum + marks[i];

//     }
    

//     return sum;
// }