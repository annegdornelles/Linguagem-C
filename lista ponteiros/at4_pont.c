#include <stdio.h>

int main()
{

    int matriz[100][100], *p, i;

    p = matriz[0];

    for (i = 0; i < 10000; i++)
    {

        *p = (i + 1);
        p++;
    }
    p = matriz[0];

    for (i = 0; i < 10000; i++)
    {
        printf(" %d", *p);
        p++;
    }
}
