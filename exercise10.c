#include<stdio.h>

int main()
{
    int LA[3][2] = {{1,2}, {3,4}, {5,6}};

    LA[2][1] = 50; 

    printf("Output: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", LA[i][j]); 
        }
        printf("\n"); 
    }
}
