#include <stdio.h>

/** SUBMISSÃO # 29086243
 *
 *  PROBLEMA: 1007 - Diferença
 *  RESPOSTA: Accepted
 *  LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 *  TEMPO: 0.000s
 *  TAMANHO: 164 Bytes
 *  MEMÓRIA: -
 *  SUBMISSÃO: 02/08/2022 23:12:07
 *
 */

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("DIFERENCA = %d\n", a * b - c * d);
    return 0;
}
