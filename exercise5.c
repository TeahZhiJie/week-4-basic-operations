#include<stdio.h>

int main()
{
    float LA[] = {1.5, 1.2, 1.8, 1.6, 1.1};

    for (int i = 2; i < 4; i++)
    {
        LA[i] = LA[i+1]; 
    }

    printf("Output: \n"); 
    for (int i = 0; i < 4; i++)
    {
        printf("LA[%d] = %.1f\n", i, LA[i]); 
    }
}
