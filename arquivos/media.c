//le as medias de um arquivo (cada nota em uma linha)

#include<stdio.h>

int main(){
    float nota, media;
    FILE *arquivo;
    int soma=0, quantidade;
    char nomeArquivo[50];

    printf("\n Digite o nome do arquivo:");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo==NULL){
        printf("\n Erro ao abrir o arquivo");
    }

    while(fscanf(arquivo,"%f",&nota)!=EOF){
        soma+=nota;
        quantidade++;
    }

    fclose(arquivo);

    media = soma/quantidade;

    printf("\n Media:%f", media);
}