#include<stdio.h>
#define a 3

typedef struct conta{
    char nome[50];
    int num;
    float saldo;
};

int cadastro(struct conta dados[]){
    int i=0,clientes,existe,cadastro;

    for (i=0;i<a;i++){
        dados[i].num=0;
    }

    /*printf ("\n Quantos clientes serao cadastrados?");
    scanf ("%d",&clientes);*/

    for (i=0;i<a;i++){
        printf ("\n Insira o nome:");
        scanf ("%s",dados[i].nome);

        printf ("\n Insira o numero da conta:");
        scanf ("%d",&cadastro);

    for (int j = 0; j < a; j++) {
        if (cadastro == dados[j].num &&dados[j].num != 0) {
            printf("\nO numero dessa conta ja existe. Nao eh possivel se cadastrar.\n");
            existe = 1;
        }}
        printf ("\n Insira o saldo:");
        scanf ("%f",&dados[i].saldo);
    }
}

int visualizar(struct conta dados[]){
    int i;
    for (i=0;i<a;i++){
        printf  ("\n Nome:%s\n Numero da conta:%d\n Saldo:%f",dados[i].nome,dados[i].num,dados[i].saldo);
    }
    }

int excluir (struct conta dados[]){
    int i,j,indice=-1,menor=3028507;

    for (i=0;i<a;i++){
        if (dados[i].saldo<menor){
            indice=i;
        }
    }
    printf("\n Conta excluida\n Nome:%s\n Numero da conta:%d\n Saldo:%f\n",dados[indice].nome,dados[indice].num,dados[indice].saldo);
}

int sair(struct conta dados[]){
    printf("\n Saindo do programa");
}

main (){
    struct conta dados[a];
    int escolha;

    do{

    printf ("\n O que deseja fazer?\n 1 - Cadastrar novas contas\n 2 - visualizar contas existentes\n 3 - excluir conta com menor saldo\n 4 - sair do programa");
    scanf ("%d",&escolha);

    switch (escolha){
        case 1:
        cadastro(dados);
        break;

        case 2:
        visualizar(dados);
        break;

        case 3:
        excluir(dados);
        break;

        case 4:
        sair (dados);
        break;

        default:
        printf("\n Numero invalido:");
    }
}while(escolha!=4);
}
