#include<stdio.h>

int main()
{
    char LA[5] = {'a', 'e', 'i', 'o'}; 

    LA[4] = 'u'; 

    printf("Output: \n"); 
    for (int i = 0; i < 5; i++)
    {
        printf("LA[%d] = %c\n", i, LA[i]); 
    }
}
