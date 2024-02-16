#include<stdio.h>

struct empresa{
    char civil;
    float salario;
    int anos;
};

int asalario(struct empresa func,float *aumento,int *taxa){
    if ((func.anos>5)&&(func.civil=='c'||func.civil=='C')){
        *aumento= func.salario + func.salario*0.1;
        *taxa = 10;
    }
    if ((func.anos<=5)||(func.civil=='s'||func.civil=='S')){
        *aumento=func.salario+func.salario*0.08;
        *taxa = 8;
    }
}

main (){
    struct empresa func,taxa;
    float aumento;

    printf("\n Insira seu atual salario:");
    scanf ("%f",&func.salario);

    printf ("\n Insira seu estado civil(C/S)");
    scanf (" %c",&func.civil);

    printf("\n Insira a quantidade de anos na empresa:");
    scanf("%d",&func.anos);

    asalario(func,&aumento,&taxa);

    printf("\n Salario inicial:%f\n Aumento:%d%\n Salario com aumento:%f",func.salario,taxa,aumento);
}
