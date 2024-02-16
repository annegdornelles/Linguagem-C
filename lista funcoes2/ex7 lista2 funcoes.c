/*- Criar uma função que receba um vetor de caracteres, seu tamanho e um caractere e retire
todas as ocorrências desse caractere no vetor, colocando * em seu lugar. A função deve
retornar o total de caracteres retirados do vetor.*/

#include<stdio.h>
#include <string.h>

int remover(char str[], int tam, char c) {
    int cont = 0;

    for (int i = 0; i<tam; i++) {
        if (str[i] == c) {
            str[i] = '*';
            cont++;
        }
    }

    return cont;
}

int main() {
    char str[100],c;
    int tam=0;

    printf ("Insira uma string:");
    gets (str);

    printf ("\nInsira um caracter a ser removido da string:");
    scanf ("%c",&c);

    tam = strlen(str);

    int cont = remover(str, tam, c);

    printf("Texto modificado: %s\n", str);
    printf("Total de caracteres removidos: %d\n",cont);

    return 0;
}
