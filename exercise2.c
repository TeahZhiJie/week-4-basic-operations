#include<stdio.h>

int main()
{
    int LA[] = {1, 4, 5, 7, 10, 12, 13, 17, 18, 20};

    printf("Output: \n");

    for (int i = 0; i < 10; i++)
    {
        if (LA[i] % 2 == 0)
        {
            printf("LA[%d] = %d\n", i, LA[i]);  
        }
    }
}
