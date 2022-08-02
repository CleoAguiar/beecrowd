#include <stdio.h>

/********************************************************
SUBMISSÃO # 29074833
    PROBLEMA: 1006 - Média 2
    RESPOSTA: Accepted
    LINGUAGEM: C++17 (g++ 7.3.0, -std=c++17 -O2 -lm) [+0s]
    TEMPO: 0.000s
    TAMANHO: 301 Bytes
    MEMÓRIA: -
    SUBMISSÃO: 02/08/2022 00:54:57
*********************************************************/

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("MEDIA = %.1lf\n", ((a*2.0)+(b*3.0)+(c*5.0))/10.0);
    return 0;
}
