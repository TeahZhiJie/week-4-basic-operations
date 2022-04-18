#include<stdio.h>

int main()
{
    int LA[3][2] = {{1,2}, {3,4}, {5,6}}; 

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (LA[i][j] == 5)
            {
                printf("Output: \n"); 
                printf("Found value 5 at position row %d column %d \n", i+1, j+1); 

            }
        }
    }
}
