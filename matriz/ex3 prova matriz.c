#include<stdio.h>
main (){
    int i,j,m[3][3],v[3],b[3][3];
    for (i=0;i<3;i++){
        printf ("Insira o vetor:");
        scanf ("%d",&v[i]);
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf ("Insira a matriz:");
            scanf ("%d",&m[i][j]);
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (j==0){
                b[i][j]=m[i][j]*v[0];
                m[i][j]=b[i][j];
            }
            if (j==1){
                 b[i][j]=m[i][j]*v[1];
                m[i][j]=b[i][j];
            }
            if (j==2){
                 b[i][j]=m[i][j]*v[2];
                m[i][j]=b[i][j];
            }
}
}
for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        printf ("\n Matriz modificada:%d",m[i][j]);
    }
}
}
