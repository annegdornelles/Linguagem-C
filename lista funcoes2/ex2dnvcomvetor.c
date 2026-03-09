
#include <stdio.h>

float media(float notas[], char letra);

int main(){
    float notas[3], resultado;
    int i;
    char letra;

    for(i = 0; i < 3; i++){
        printf("Insira sua nota:\n");
        scanf("%f", &notas[i]);
    }

    printf("\n Insira A para media simples e P para media ponderada:\n");
    scanf(" %c",&letra);

    resultado = media(notas, letra);

    printf("A media eh: %f", resultado);

    return 0;
}

float media(float notas[], char letra){
    float m;

    switch(letra){
         case 'A':
                   m = (notas[0] + notas[1] + notas[2]) / 3;
                   break;

        case 'P':
                   m=(notas[0]*5+notas[1]*3+notas[2]*2)/10;
                   break;
        default:
        printf("Letra invalida\n");
}
return m;
}