#include <stdio.h>

/** SUBMISSÃO # 29086415
 *
 * PROBLEMA: 1009 - Salário com Bônus
 * RESPOSTA: Accepted
 * LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 * TEMPO: 0.000s
 * TAMANHO: 209 Bytes
 * MEMÓRIA: -
 * SUBMISSÃO: 02/08/2022 23:29:43
 *
 */

int main() {
    char nome[100];
    double salario, vendas;
    scanf("%s %lf %lf", &nome, &salario, &vendas);
    printf("TOTAL = R$ %.2f\n", salario+vendas*0.15);
    return 0;
}
