#include<cs50.h>
#include<stdio.h>

float n;

int main(void)
{
   do
   {
        n = get_float("Change owed: ");
   }
   while (n < 0);

    int z = 1;
    int y = 0;
    int x;

    if(z == 1 && n > 0)
    {
        x = 0;
        while (n >= 25)
        {
            n -= 25;
            y ++;
            x ++;
        }
        z ++;
        printf("Quarters needed: %i\n", x);
    }

        if(z == 2 && n > 0)
    {
         x = 0;
        while (n >= 10)
        {
            n -= 10;
            y ++;
            x ++;
        }
        z ++;
        printf("Dimes needed: %i\n", x);
    }

        if(z == 3 && n > 0)
    {
        x = 0;
        while (n >= 5)
               {
            n -= 5;
            y ++;
            x ++;
        }
        z ++;
        printf("Nickels needed: %i\n", x);
    }

    if(z == 4 && n > 1)
    {
        x = 0;
        while (n >= 1)
        {
            n -= 1;
            y ++;
            x ++;
        }
        z ++;
        printf("Pennies needed: %i\n", x);
    }

    printf("Total coins needed: %i\n", y);

}