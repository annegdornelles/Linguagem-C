#include<stdio.h>
main (){
    int i,j,somadp=0,somads=0,somal=0,somali=0,somalin=0,somalinh=0,somac=0,somaco=0,somacol=0,somacolu=0,m[3][3];
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf ("Insira a matriz:");
            scanf ("%d",&m[j][i]);
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (i==j){
                somadp=somadp+m[j][i];
            }
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (i+j==4){
                somads=somads+m[j][i];
            }
        }
    }
    for (i=0;i<1;i++){
        for (j=0;j<3;j++){
            somal=somal+m[j][i];
            }
        }
        for (i=1;i<2;i++){
        for (j=0;j<3;j++){
            somali=somali+m[j][i];
            }
        }
        for (i=2;i<3;i++){
        for (j=0;j<3;j++){
            somalin=somalin+m[j][i];
            }
        }
        for (i=3;i<4;i++){
        for (j=0;j<3;j++){
            somalinh=somalinh+m[j][i];
            }
        }
        for (i=0;i<3;i++){
        for (j=0;j<1;j++){
            somac=somac+m[j][i];
            }
        }
        for (i=0;i<3;i++){
        for (j=1;j<2;j++){
            somaco=somaco+m[j][i];
            }
        }
        for (i=0;i<3;i++){
        for (j=3;j<4;j++){
            somacolu=somacolu+m[j][i];
            }
        }
        if ((somal==somali)&&(somali==somalin)&&(somalin==somalinh)&&(somalinh==somac)&&(somac==somaco)&&(somaco==somacol)&&(somacol==somacolu)){
            printf("Eh um quadrado magico");
        }
        else{
            printf ("Nao eh um quadrado magico");
        }
}


