#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main (){
    char codigo[6];
    int quantidade,total=0;

    while (codigo!='X'){
        printf ("Qual (is) item(s) foram comprados?\n H = hamburguer\n C = Cheeserburguer\n M = Misto quente \n A = Americano\n Q = Queijo pranto\n X para encerrar o que foi pedido");
        gets (codigo);
        strupr(codigo);


    printf("\n Digite a quantidade: ");
        scanf("\n%d", &quantidade);

        if (strcmp(codigo, "H") == 0) {
            total = 5*quantidade;
        }
        else if (strcmp(codigo, "C") == 0) {
            total = 6*quantidade;
        }
        else if (strcmp(codigo, "M") == 0) {
            total = 4*quantidade;
        }
        else if (strcmp(codigo, "A") == 0) {
            total = 8*quantidade;
        }
        else if (strcmp(codigo, "Q") == 0) {
            total = 8*quantidade;
        }

    }


    printf("Total: R$%d\n", total);

} // ou usar switch:
//switch (codigo);
//case H:\n case M; etc
