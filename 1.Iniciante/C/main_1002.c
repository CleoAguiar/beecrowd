#include <stdio.h>

/********************************************************
SUBMISS�O # 29074501
    PROBLEMA: 1002 - �rea do C�rculo
    RESPOSTA: Accepted
    LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
    TEMPO: 0.000s
    TAMANHO: 264 Bytes
    MEM�RIA: -
    SUBMISS�O: 02/08/2022 00:30:30
*********************************************************/

int main() {
    double raio;
    scanf("%lf", &raio);
    printf("A=%.4lf\n", 3.14159*raio*raio);
    return 0;
}
