#include <stdio.h>
#include <string.h>

int main()
{

    char nome[256];
    int i, vogais = 0, consoantes = 0, tamanho, upper = 0, down = 0;

    printf("Digite um nome:");
    gets(nome);

    tamanho = strlen(nome);

    for (i = 0; i < tamanho; i++)
    {

        if (nome[i] == 'a' || nome[i] == 'A' || nome[i] == 'e' || nome[i] == 'E' || nome[i] == 'i' || nome[i] == 'I' || nome[i] == 'o' || nome[i] == 'O' || nome[i] == 'u' || nome[i] == 'U')
        {
            vogais++;
        }
        else
        {
            consoantes++;
        }

        if (isupper(nome[i]))
        {
            upper++;
        }
        else
        {
            down++;
        }
    }

    printf("Nome: %s", nome);
    printf("\n(%d) letras minusculas", down);
    printf("\n(%d) letras maiusculas", upper);
    printf("\n(%d) vogais", vogais);
    printf("\n(%d) consoantes", consoantes);
}