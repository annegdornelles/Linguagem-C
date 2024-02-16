/*Escreva um programa em C que recebe via teclado um nome (máximo 256
caracteres). Logo após a entrada do nome imprima: número de letras maiúsculas,
número de letras minúsculas, número de vogais e o número de consoantes, */

/*Escreva um programa em C que recebe via teclado um nome (máximo 256
caracteres). Logo após a entrada do nome imprima: número de letras maiúsculas,
número de letras minúsculas, número de vogais e o número de consoantes, */

#include <stdio.h>
#include <string.h>

int main() {
    char str[256];
    int maius=0, cons=0, vog=0, min=0, i, tam=0;

    printf("Insira uma string: ");
    gets (str);

    tam = strlen(str);

    for (i = 0; i < tam; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            maius++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            min++;
        }
    }

    for (i = 0; i < tam; i++) {
        if (str[i] == 'e' || str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'o' ||
            str[i] == 'E' || str[i] == 'A' || str[i] == 'I' || str[i] == 'U' || str[i] == 'O') {
            vog++;
        } else {
            cons++;
        }
    }

    printf("\nMaiusculas:%d\nMinusculas:%d\nVogais:%d\nConsoantes:%d\n", maius, min, vog, cons);

}
