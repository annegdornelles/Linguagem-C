/*Escreva em C a função CONTA. A função recebe uma string (nome) e devolve via
parâmetros: número letras maiúsculas e o número letras minúsculas. A função retorna
o total de letras do nome.*/

#include <stdio.h>
#include <string.h>

int conta(char str[], int *maiusc, int *min) {

    int t = strlen(str);

    for (int i = 0; i < t; i++) {

        if (str[i] >= 'a' && str[i] <= 'z')
            (*min)++;

        else if (str[i] >= 'A' && str[i] <= 'Z')
            (*maiusc)++;
    }

    return t;
}

int main() {

    char str[100];
    int maiusc = 0, min = 0, total;

    printf("Insira a string: ");
    fgets(str, 100, stdin);

    total = conta(str, &maiusc, &min);

    printf("\nTotal: %d\nMaiusculas: %d\nMinusculas: %d\n",
           total, maiusc, min);

    return 0;
}
