/** SUBMISSÃO # 29145302
 *
 * PROBLEMA: 1016 - Distância
 * RESPOSTA: Accepted
 * LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 * TEMPO: 0.000s
 * TAMANHO: 0 Bytes
 * MEMÓRIA: -
 * SUBMISSÃO: 07/08/2022 13:50:47
 *
 */

#include <stdio.h>

#define DISTANCIA(distanciaKm) (distanciaKm*60/30)

int main() {
    int distancia;
    scanf("%d", &distancia);
    printf("%d minutos\n", DISTANCIA(distancia));
    return 0;
}
