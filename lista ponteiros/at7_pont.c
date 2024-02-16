#include <stdio.h>
#include <string.h>

int main()
{

    char um[50], *anda1, *cpy1, aux;
    int i, j, tam;

    printf("Digite uma cadeia de caracteres:");
    scanf("%s", um);

    tam = strlen(um);

    for (i = 0; i < tam - 1; i++)
    {
        for (j = i + 1; j < tam; j++)
        {
            anda1 = &um[i];
            cpy1 = &um[j];

            if (*anda1 > *cpy1)
            {
                aux = *cpy1;
                *cpy1 = *anda1;
                *anda1 = aux;
            }
        }
    }

    printf("Vetor um ordenado em ordem alfabética: %s\n", um);
}
