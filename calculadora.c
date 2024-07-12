#include<cs50.h>
#include<stdio.h>

int n;
float x;
float y;

    void soma(void)
    {
        printf("%f\n", x + y);
    }
    void subt(void)
    {
        printf("%f\n", x - y);
    }
    void divs(void)
    {
        printf("%f\n", x / y);
    }
    void mult(void)
    {
        printf("%f\n", x * y);
    }

int main(void)
{
    do
    {
    n = get_int("Soma 1, Subtrai 2, Divide 3, Multiplica 4. Qual operacao?: ");
    }
    while (n < 1 || n > 4);
    x = get_float("x: ");
    y = get_float("y: ");

    if(n == 1)
    {
        soma();
    }
    else if(n == 2)
    {
        subt();
    }
    else if(n == 3)
    {
        divs();
    }
    else if(n == 4)
    {
        mult();
    }


}
