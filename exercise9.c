#include<stdio.h>

int main()
{
    int LA[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    LA[4] = 100; 

    printf("Output: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("LA[%d] = %d\n", i, LA[i]); 
    }
}
