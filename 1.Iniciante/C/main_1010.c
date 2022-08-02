#include <stdio.h>

/** SUBMISSÃO # 29086691
 *
 * PROBLEMA: 1010 - Cálculo Simples
 * RESPOSTA: Accepted
 * LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 * TEMPO: 0.000s
 * TAMANHO: 354 Bytes
 * MEMÓRIA: -
 * SUBMISSÃO: 02/08/2022 23:47:34
 *
 */

int main() {
    int codigo_p1, numero_p1, codigo_p2, numero_p2;
    float valor_p1, valor_p2;
    scanf("%d %d %f %d %d %f", &codigo_p1, &numero_p1, &valor_p1,
                                &codigo_p2, &numero_p2, &valor_p2);
    printf("VALOR A PAGAR: R$ %.2f\n", numero_p1*valor_p1+numero_p2*valor_p2);
    return 0;
}
