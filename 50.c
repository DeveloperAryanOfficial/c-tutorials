#include <stdio.h>
#include <stdlib.h>

int palindrome(int n)
{
    int sum=0,digit;

    for (int i = 0; i < sizeof(n); i++)
    {
        digit = n % 10;
        sum = sum * 10 + digit;
        n = n / 10;

    }
    sum=sum/10;
    return sum;
}

int main()
{
    system("cls");

    // Solve a palindrome number
    int n,ReverseNum;
    printf("Enter a number to check it is palindrome or not \n");
    scanf("%d", &n);

    ReverseNum=palindrome(n);

    if (n==ReverseNum)
    {
        printf("This is a palindrome number\n");
        
    }
    else
    {
        printf("This is not a palindrome number\n");
    }

    return 0;
}