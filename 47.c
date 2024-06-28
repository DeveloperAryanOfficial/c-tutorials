#include <stdio.h>
// #include <stdlib.h>
int main()
{
    
    // int r1, c1 ,r2, c2;

    // printf("Enter the number of rows For first matrix : ");
    // scanf("%d", r1);
    // printf("Enter the number of column For first matrix : ");
    // scanf("%d", c1);

    // printf("Enter the number of rows For second matrix : ");
    // scanf("%d", r2);
    // printf("Enter the number of columns For second matrix : ");
    // scanf("%d", c2);
    // getchar();
    
        int sum=0;
        int A[2][2], B[2][2] , result[2][2];
        

        printf("Enter the first matrix\n");

        for( int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                // printf("a%d%d : ",i,j);
                scanf("%d",&A[i][j]);
                
            }
            // printf("\n");
        }

        

        printf("Enter the second matrix\n");

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                // printf("a%d%d : ",i,j);
                scanf("%d",&B[i][j]);
            }
            // printf("\n");
        }


        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    sum+=A[i][k] * B[k][j];
                }
                result[i][j]=sum;
                sum=0;
                
            }
            
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d \t",result[i][j]);
            }
            printf("\n");
            
        }
        
        

        
    

    return 0;
}