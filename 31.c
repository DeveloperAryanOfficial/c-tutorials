#include<stdio.h>
#include<string.h>

int main ()
{
    char s1[10];
    char s2[10];
    char s3[]=" is a friend of ";
    
    printf("Enter the first friend name : ");
    gets(s1);
    printf("Enter the second friends name : ");
    gets(s2);

    // printf("%s is a friend of %s . ", s1 , s2);

    puts(strcat(s1,strcat(s3,s2)));


    // printf("The length of s1 is : %d\n",strlen(s1));
    // printf("The length of s2 is : %d\n",strlen(s2));

    // printf("The reverse value of s1 is : ");
    // puts(strrev(s1));
    // printf("\n");
    // printf("The reverse value of s2 is : ");
    // puts(strrev(s2));
    // printf("\n");


    // strcpy(s3,s1);
    // strcpy(s1,s2);
    // puts(s3);
    // puts(s1);


    // strcat(s1,s2);
    // puts(strcat(s1, s2));


    // puts(strcmp(s1,s2));
    // printf("%d",strcmp(s1,s2));
    
return 0;
}