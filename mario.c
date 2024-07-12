#include<cs50.h>
#include<stdio.h>

int n;

int main(void)
{
    //Value test
    do
    {
         n = get_int("Height: ");
    }
    while (n <= 0 || n > 8);

    //Pyramid
    int z = 1;

    for(int i = 0; i < n; i++)
    {
         for(int y = i; y < n; y++)
            {
                printf(" ");
            }

            for(int x = 0; x < z; x++)
            {
                printf("#");
            }

        printf("  ");

        for(int u = 0; u < z; u++)
        {
            printf("#");
        }

        printf("\n");
        z++;

    }
}
