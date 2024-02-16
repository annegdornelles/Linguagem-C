#include <stdio.h>

main()
{

    int vet1[10], i, *p;
    float vetf[10], *q;

    p = &vet1[0];
    q = &vetf[0];

    for (i = 0; i < 10; i++)
    {

        *p = i;
        p++;
        *q = i;
        q++;
    }

    p = &vet1[0];
    q = &vetf[0];

    printf("\nVetor de int: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d", *p);
        p++;
    }

    printf("\nVetor de float:");

    for (i = 0; i < 10; i++)
    {
        printf("%2.f", *q);
        q++;
    }
}