#include <stdio.h>
int main() {
    int n, i,melhorv;
    float t[n],melhort,media;
    printf("Digite o número de voltas: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Digite o tempo da volta %d: ", i + 1);
        scanf("%f", &t[i]);
        if (i == 0 || t[i] < melhort) {
            melhort = t[i];
            melhorv = i + 1;
        }
        media+= t[i];
    }
media/= n;
    printf("\nMelhor tempo: %f\n", melhort);
    printf("Volta do melhor tempo: %d\n", melhorv);
    printf("Tempo médio das voltas: %f\n",media);

}
