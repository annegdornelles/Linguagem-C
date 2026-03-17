/* Programa que procura pelas ocorrências de uma string dentro de um arquivo texto e informe
em que posições (linha, coluna) formam encontradas as ocorrências. */

#include<stdio.h>
#include<string.h>

int main(){
    FILE *arquivo;
    int j=0,i=0;
    char nomeArquivo[50],palavra[50], *posicao, linhaTexto[50];
    /*linhaTexto = guarda linha do arquivo
    palavra = palavra que queremos
    i = linha(geral) j=coluna
    posicao = ponteiro pra onde a palavra foi achada*/
    // posicao aponta para o início da linha atual

    printf("\n Insira o nome do arquivo:");
    scanf("%s",nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    printf("\n Insira a palavra que deseja procurar:");
    scanf("%s",palavra);

    if(arquivo==NULL){
        printf("Erro ao abrir arquivo");
    }

    while(fgets(linhaTexto,100,arquivo)){//fgets le linha por linha
        i++;//conta a linha q estamos
        posicao = linhaTexto;//ponteiro guarda a linha do texto q estamos. comeca do inicio

        while((posicao=strstr(posicao,palavra))!=NULL){//se na linha tiver a palavra que queremos
            j =  posicao - linhaTexto +1;//a coluna é "calculada". posicao - linha texto onde foi achada e a linha texto "total" + 1, assim achando a coluna
            printf("\n Palavra encontrada na linha %d coluna %d\n",i,j);
            posicao += strlen(palavra);;//incrementa a posicao para continuar de onde parou
        }
    }

fclose(arquivo);
}
