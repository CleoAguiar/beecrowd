#include <stdio.h>

/********************************************************
SUBMISSÃO # 29074700
    PROBLEMA: 1005 - Média 1
    RESPOSTA: Accepted
    LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
    TEMPO: 0.000s
    TAMANHO: 280 Bytes
    MEMÓRIA: -
    SUBMISSÃO: 02/08/2022 00:45:21
*********************************************************/

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("MEDIA = %.5lf\n", ((a*3.5)+(b*7.5))/11);
    return 0;
}
