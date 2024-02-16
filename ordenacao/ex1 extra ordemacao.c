/* uma agencia espia deseja enviar mensagens secretas para seus agentes. o codigo dessas msgs é a substituição das vogais por nums, sendo que as vogais a e i o u correspondem a 2 3 4 5 6.
nesse codigo a frase "EU ESTOU NA AULA DE ICC" correspondem a frase: "36 3ST56 N2 26L2 DE 4CC". faça um programa em  C que receba uma frase e a codifique-a.
a frase deve possuir no maximo 60 caracteres.*/

#include<stdio.h>
#include<string.h>
main (){

char str[60], str2[60];
int tam=0,i;

printf ("Insira uma frase:");
gets (str);

tam = strlen (str);

for (i=0;i<tam;i++){

    if (str[i]=='a'){
        strset (str,'6');
    }
     else if (str[i]=='e'){
        str[i]=3;
    }
     else if (str[i]=='i'){
        str[i] = 4;
    }
     else if (str[i]=='o'){
        str[i] = 5;
    }
     else if (str[i]=='u'){
        str[i] = 6;
    }
}

printf ("String modificada:%s",str);
}


