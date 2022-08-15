/** SUBMISSÃO # 29280672
 *
 * PROBLEMA: 1020 - Idade em Dias
 * RESPOSTA: Accepted
 * LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 * TEMPO: 0.000s
 * TAMANHO: 405 Bytes
 * MEMÓRIA: -
 * SUBMISSÃO: 15/08/2022 22:44:39
 *
 */

#include <stdio.h>

#define ANO(dias) ((dias)/(365))
#define MES(dias) ((dias)/(30))
#define RESTO_DIAS(dias, n) ((dias)%(n))

int main() {
    int n_dias;
    scanf("%d", &n_dias);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",
           ANO(n_dias),
           MES(RESTO_DIAS(n_dias, 365)),
           n_dias - (ANO(n_dias) * 365) - (MES(RESTO_DIAS(n_dias, 365))*30));
    return 0;
}
