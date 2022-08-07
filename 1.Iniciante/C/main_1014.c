/** SUBMISSÃO # 29145087
 *
 * PROBLEMA: 1014 - Consumo
 * RESPOSTA: Accepted
 * LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 * TEMPO: 0.000s
 * TAMANHO: 288 Bytes
 * MEMÓRIA: -
 * SUBMISSÃO: 07/08/2022 13:29:49
 *
 */

#include <stdio.h>

#define CONSUMO(distancia, consumo) (distancia/consumo)

int main() {
    int distanciaX;
    float combustivel_gastoY;
    scanf("%d %f", &distanciaX, &combustivel_gastoY);
    printf("%.3f km/l\n",  CONSUMO(distanciaX, combustivel_gastoY));
    return 0;
}
