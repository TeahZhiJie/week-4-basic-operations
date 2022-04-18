#include<stdio.h>

int main()
{
    char LA[] = {'a', 'e', 'i', 'o', 'u'}; 

    for (int i = 0; i < 5; i++)
    {
        if (LA[i] == 'e')
        {
            printf("Output: \n");
            printf("Found character e at position %d", i+1); 
            break; 
        }
    }
}
