#include <stdio.h>
#include <math.h>

numeroReal(float num, float *inteiro, float *fracao)
{

    *inteiro = floor(num); //arredonda float
    *fracao = num - *inteiro;

}

main()
{

    float numero, part_inteiro, parte_fracao;

    printf("Digite um real: ");
    scanf("%f", &numero);

    numeroReal(numero, &part_inteiro, &parte_fracao);

    printf("Parte inteira: %2.f", part_inteiro);

    printf("\nParte fracionaria: %f", parte_fracao);
}
