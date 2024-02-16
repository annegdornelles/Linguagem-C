#include <stdio.h>
#include <string.h>

main(){


char fregues[50],tipo[50],roupa[50],tipov,resp='s',cliented[50],resp2='s';
int i,menu,quantidade,preco2;
float precovs,precovp,precovl,blusa,calca,blazer,saia,conjunto,total=0;

while (resp2=='s'){

printf("\n o que deseja fazer?\n 1-cadastrar-se\n2-cadastre o preço das costuras\n3-calculer preco que sera pago\n4- listar dados");
scanf("%d",&menu);





switch(menu){
case 1:
for(i=0;i<10;i++){

printf("\n insira seu nome:");
gets(fregues);
}
break;

case 2:

while (resp=='s'){
printf("\n o que deseja cadastrar?\n 1-vestido\n 2-calca \n 3-saia \n4-bçusa \n 5-conjunto \n 6-blazer");
scanf("%d",&preco2);

switch(preco2){

case 1:

printf("tipo de vestido: (simples/passeio/longo)");
scanf("\n%s",tipo);

if (strcmp(tipo,'simples')==0){
printf ("vestido simples:");
scanf ("\n%f",&precovs);
}

if (strcmp(tipo,'passeio')==0){
printf ("vestido passeio:");
scanf ("\n%f",&precovp);
}

if (strcmp(tipo,'longo')==0){
printf ("vestido longo:");
scanf ("\n%f",&precovl);
}
break;

case 2:

printf ("calca:");
scanf ("%f",&calca);
break;

case 3:

printf ("saia:");
scanf ("%f",&saia);
break;

case 4:

printf ("blusa:");
scanf ("%f",&blusa);
break;

case 5:

printf ("conjunto:");
scanf ("%f",&conjunto);
break;

case 6:

printf ("blazer:");
scanf ("%f",&blazer);
break;

default:
printf ("codigo invalido");
}
i++;
printf ("deseja continuar?s/n");
scanf ("\n%c",&resp);
}
break;

case 3:

printf ("que roupa voce deseja comprar: vestido/blazer/calca/saia/blusa/conjunto");
scanf("%s",roupa);

if (strcmp(roupa,'vestido')==0){
printf ("que tipo de vestido? passeio/longo/simples");
gets (tipov);

if (strcmp(tipov,'simples')==0){
printf ("quantidade:");
scanf ("%d",&quantidade);
total=precovs*quantidade;
printf ("total:%f",total);
}

if (strcmp(tipov,'passeio')==0){
printf ("quantidade:");
scanf ("%d",&quantidade);
total=precovp*quantidade;
printf ("total:%f",total);
}

if (strcmp(tipov,'longo')==0){
printf ("quantidade:");
scanf ("%d",&quantidade);
total=precovl*quantidade;
printf ("total:%f",total);
}
}


if (strcmp(roupa,'calca')==0){
printf ("quantidade:");
scanf ("%d",quantidade);
total=calca*quantidade;
printf ("total:%f",total);
}

if (strcmp(roupa,'saia')==0){
printf ("quantidade:");
scanf ("%d",quantidade);
total=saia*quantidade;
printf ("total:%f",total);
}

if (strcmp(roupa,'blusa')==0){
printf ("quantidade:");
scanf ("%d",quantidade);
total=blusa*quantidade;
printf ("total:%f",total);
}

if (strcmp(roupa,'conjunto')==0){
printf ("quantidade:");
scanf ("%d",quantidade);
total=conjunto*quantidade;
printf ("total:%f",total);
}

if (strcmp(roupa,'blazer')==0){
printf ("quantidade:");
scanf ("%d",quantidade);
total=blazer*quantidade;
printf ("total:%f",total);
}
break;

case 4:
printf ("insira a cliente desejada: ");
scanf("%d",&cliented);
if (strcmp(fregues,cliented)==0){
printf("\nnome:");
gets(fregues);
printf("gastos:%d",total);

}
break;
default:
printf("\n codigo invalido");


}

printf ("deseja continuar?");
scanf ("\n%c",&resp2);
}
}



