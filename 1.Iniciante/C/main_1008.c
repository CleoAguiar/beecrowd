#include <stdio.h>

/** SUBMISSÃO # 29086337
 *
 *  PROBLEMA: 1008 - Salário
 *  RESPOSTA: Accepted
 *  LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 *  TEMPO: 0.000s
 *  TAMANHO: 218 Bytes
 *  MEMÓRIA: -
 *  SUBMISSÃO: 02/08/2022 23:23:32
 *
 */

int main() {
    int numero, horas;
    float salario;
    scanf("%d %d %f", &numero, &horas, &salario);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, horas*salario);
    return 0;
}
