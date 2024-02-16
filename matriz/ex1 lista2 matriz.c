#include<stdio.h>
main (){
    int i,j;
    float a[10][5],maior1=0,maior2=0,maior3=0,maior4=0,maior5=0;
    printf ("Insira a altura dos atletas da primeira delegacao:");
    for (i=0;i<10;i++){
        for (j=0;j<1;j++){
            scanf ("%f",&a[i][j]);
            if (a[i][j]>maior1){
                maior1=a[i][j];
            }
        }
    }
     printf ("Insira a altura dos atletas da segunda delegacao:");
    for (i=0;i<10;i++){
        for (j=1;j<2;j++){
            scanf (" %f",&a[i][j]);
            if (a[i][j]>maior2){
                maior2=a[i][j];
            }
        }
    }
     printf ("Insira a altura dos atletas da terceira delegacao:");
    for (i=0;i<10;i++){
        for (j=2;j<3;j++){
            scanf (" %f",&a[i][j]);
            if (a[i][j]>maior3){
                maior3=a[i][j];
            }
        }
    }
     printf ("Insira a altura dos atletas da quarta delegacao:");
    for (i=0;i<10;i++){
        for (j=3;j<4;j++){
            scanf ("%f",&a[i][j]);
            if (a[i][j]>maior4){
                maior4=a[i][j];
            }
        }
    }
     printf ("Insira a altura dos atletas da quinta delegacao:");
    for (i=0;i<10;i++){
        for (j=4;j<5;j++){
            scanf ("%f",&a[i][j]);
            if (a[i][j]>maior5){
                maior5=a[i][j];
            }
        }
    }
    printf ("\n Maior altura da primeira delegacao:%f\n Maior altura da segunda delegacao:%f\n Maior altura da terceira delegacao:%f\n Maior altura da quarta delegacao:%f\n Maior altura da quinta delegacao:%f",maior1,maior2,maior3,maior4,maior5);
}
