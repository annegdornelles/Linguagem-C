/*Faça um programa para ler uma tabela contendo os nomes dos alunos de uma turma de 5 alunos. O
programa deve solicitar ao usuário os nomes dos alunos, sempre perguntando se ele deseja inserir mais
um nome na lista. Uma vez lidos todos os alunos, o usuário irá indicar um nome que ele deseja verificar se
está presente na lista, onde o programa deve procurar pelo nome (ou parte deste nome) e se encontrar
deve exibir na tela o nome completo e o índice do vetor onde esta guardado este nome.*/
#include<stdio.h>
#include<string.h>
main (){
    char nome[5][150],n[150],resp='S';
    int i=0;

        while ((resp=='S')&&(i<5)){
        printf ("Insira o nome do aluno:");
        gets(nome);
        printf ("Deseja continuar?S/N");
        scanf ("\n%c",&resp);
        i++;
    }

    printf ("Digite um nome que voce deseja verificar se esta na lista:");
    scanf ("%s",&n);

    for (i=0;i<5;i++){
        if (strcmp(nome[i],n)==0){
            printf ("\nNome:%s\n Indice:%d",nome[i],i+1);
        }
    }
}
