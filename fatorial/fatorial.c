// declara��o de bibliotecas
#include <stdio.h>


// c�digo principal
int main()
{
    int x, y;

    while (x > 0)
    {
        x = y;
        x * (y--);
    }


    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d\n\n", &x);

    printf("Fatorial de %d = %d", x, y);

}
