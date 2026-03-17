/*Faça um programa para ler um arquivo texto (o usuário deve fornecer o nome do arquivo) e
imprimir seu conteúdo na tela. Para controlar a velocidade de impressão, o programa deve
imprimir uma linha ou uma tela por vez. */

/*fgets() → ler linha inteira

sscanf() → extrair dados da linha

strtok() → separar palavras*/

#include<stdio.h>
#include<string.h>

int main(){
    FILE *arquivo;
    char nomeArquivo[50], conteudoArquivo[200];

     printf("Digite o caminho do arquivo:\n");
    fgets(nomeArquivo,50,stdin);//stdin faz com que a leitura do arquivo continue msm com espaco. ex: ../Meus Arquivos/ NAO para no Meus

    nomeArquivo[strcspn(nomeArquivo,"\n")] = '\0';//remove o \n que o fgets identifa no final pelo q simboliza o fim da string
    //assim problemas no nome do arquivo sao evitados

    //fscanf n le o espaco do final

    arquivo = fopen(nomeArquivo,"r");

    if(arquivo==NULL){
        printf ("\n Erro ao abri arquivo");
    }

    while(fgets(conteudoArquivo,200,arquivo)!=NULL){
        printf("%s", conteudoArquivo);
    }

    fclose(arquivo);

}