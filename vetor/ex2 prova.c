#include<stdio.h>
main (){
    int v[10],v1[10]={0,0,0,0,0,0,0,0,0,0},v2[10]={0,0,0,0,0,0,0,0,0,0},i,par=0,impar=0;
    for (i=0;i<10;i++){
        printf ("Insira os elementos do vetor:");
        scanf ("%d",&v[i]);
    }
    for (i=0;i<10;i++){
        if (v[i]%2==0){
            par++;
            v2[i]=v[i];
        }
        else{
            impar++;
            v1[i]=v[i];
        }
    }
    printf ("\n Numero de posicoes preenchidas no vetor 1 (impares):%d\n Numero de posicoes preenchidas no vetor 2 (pares):%d",impar,par);
    for (i=0;i<10;i++){
    printf ("\n v1=%d\n",v1[i]);
    }
    for (i=0;i<10;i++){
    printf ("\n v2=%d",v2[i]);
    }
}
