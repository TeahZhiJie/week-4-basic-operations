#include<stdio.h>

int main()
{
    float LA[] = {1.5, 1.2, 1.8, 1.6, 1.1};

    for (int i = 2; i < 3; i++)
    {
        LA[i] = LA[i+2]; 
    }

    printf("Output: \n"); 
    for (int i = 0; i < 3; i++)
    {
        printf("LA[%d] = %.1f\n", i, LA[i]); 
    }
}
