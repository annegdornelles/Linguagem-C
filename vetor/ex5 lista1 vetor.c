#include<stdio.h>
main (){
    int i,v[10],a[10];
    for (i=0;i<10;i++){
        printf ("Insira os elementos:");
        scanf ("%d",&v[i]);
        if (v[i]<0){
            break;
        }
        else{
           a[i]=-v[i];
        }
    }
    for (i=0;i<10;i++){
        if (v[i]<0){
            break;
        }
        printf ("\n Elementos do novo vetor:%d",a[i]);
    }
}
