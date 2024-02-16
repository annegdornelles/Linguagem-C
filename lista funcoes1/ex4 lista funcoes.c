/*Escreva em C a fun��o CONTA. A fun��o recebe uma string (nome) e devolve via
par�metros: n�mero letras mai�sculas e o n�mero letras min�sculas. A fun��o retorna
o total de letras do nome.*/

#include <stdio.h>
#include <string.h>

void CONTA(char str[], int maiusc, int minusc) {
    int len = strlen(str);
    maiusc = 0;
    minusc = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            maiusc++;
        } else if (str[i] >= 'a'&&str[i] <= 'z') {
            minusc++;
        }
    }
}

int main() {
    char str[100];
    int maiusc2 = 0, minusc2 = 0;

    printf("Insira uma string: ");
    gets(str);

    maiusc2=CONTA(maiusc);
    minusc2=CONTA(minusc);

    printf("N�mero de letras maiusculas: %d\n", maiusc);
    printf("N�mero de letras minusculas: %d\n", minusc);

    return 0;
}
