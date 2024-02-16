/*Crie uma struct chamada Pessoa que represente informa��es b�sicas sobre uma pessoa, como nome, idade e altura. Em seguida, escreva um programa que
permita cadastrar e exibir informa��es de v�rias pessoas.*/

#include <stdio.h>

// Definindo a struct Pessoa
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    // Criando um array de Pessoas para armazenar informa��es de v�rias pessoas
    struct Pessoa pessoas[3];

    // Cadastrando informa��es das pessoas
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);

        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &pessoas[i].altura);
    }

    // Exibindo as informa��es cadastradas
    printf("\nInformacoes cadastradas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Altura: %.2f\n", pessoas[i].altura);
        printf("\n");
    }

    return 0;
}
