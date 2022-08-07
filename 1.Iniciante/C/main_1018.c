/** SUBMISSÃO # 29145837
 *
 * PROBLEMA: 1018 - Cédulas
 * RESPOSTA: Accepted
 * LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 * TEMPO: 0.000s
 * TAMANHO: 629 Bytes
 * MEMÓRIA: -
 * SUBMISSÃO: 07/08/2022 14:40:56
 *
 */

#include <stdio.h>

#define RESTO(valor, cedula) (valor%cedula)

int main() {
    int valorN;
    scanf("%d", &valorN);
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",
           valorN,
           valorN/100,
           RESTO(valorN, 100)/50,
           RESTO(RESTO(valorN, 100), 50)/20,
           RESTO(RESTO(valorN, 50), 20)/10,
           RESTO(RESTO(valorN, 20), 10)/5,
           RESTO(RESTO(valorN, 10), 5)/2,
           RESTO(RESTO(valorN, 5), 2)/1);
    return 0;
}
