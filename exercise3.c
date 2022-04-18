#include<stdio.h>

int main()
{
    float LA[6] = {1.5, 1.2, 1.8, 1.6, 1.1};

    for (int i = 5; i > 3; i--)
    {
        LA[i] = LA[i-1]; 
    }

    LA[3] = 1.4; 

    printf("Output: \n"); 
    for (int j = 0; j < 6; j++)
    {
        printf("LA[%d] = %.1f\n", j, LA[j]); 
    }
}
