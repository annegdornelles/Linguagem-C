/*Programa que lê um arquivo texto e copie apenas os caracteres alfabéticos (letras) para um
arquivo de destino. Números e caracteres especiais devem ser desconsiderados. */

//fgetc = le um caractere do arquivo
//fputc = escreve um caractere no arquivo

#include<stdio.h>
#include<string.h>

int main(){

FILE *arquivo, *vogal;
char c, nomeArquivo[100];

printf("\n Insira o nome do arquivo:");
fgets(nomeArquivo,100,stdin);

nomeArquivo[strcspn(nomeArquivo,"\n")] = '\0';

arquivo = fopen(nomeArquivo, "r");
vogal = fopen("vogais.txt","w");

if(arquivo==NULL||vogal==NULL){
    printf("\n Erro ao abrir arquivos");
}

while((c = fgetc(arquivo)) != EOF){
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
        fputc(c, vogal);
    }
}

fclose(arquivo);
fclose(vogal);

}



