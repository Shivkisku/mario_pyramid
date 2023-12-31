#include <stdio.h>

void print_mario(int a, const char *b);

int main(void)
{
    // Input do tamanho da piramide
    int height;
    do
    {
        printf("Height:\n");
        scanf("%d", &height);
    } while (height < 1 || height > 8);

    int print = 1;

    // Laço para a quantidade de linhas
    while (height != 0)
    {
        // imprimindo espaços
        print_mario(height - 1, " ");
        // imprimindo #
        print_mario(print, "#");
        // imprimindo 2 espaços fixos
        print_mario(2, " ");
        // imprimindo #
        print_mario(print, "#");

        print++;
        height--;
        printf("\n");
    }
}

// Função para impressão
void print_mario(int a, const char *b)
{
    int contador;

    for (contador = 1; contador <= a; contador++)
    {
        printf("%s", b);
    }
}
