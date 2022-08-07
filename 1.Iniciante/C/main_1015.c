/** SUBMISSÃO # 29145215
 *
 * PROBLEMA: 1015 - Distância Entre Dois Pontos
 * RESPOSTA: Accepted
 * LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 * TEMPO: 0.000s
 * TAMANHO: 279 Bytes
 * MEMÓRIA: -
 * SUBMISSÃO: 07/08/2022 13:43:01
 *
 */

#include <stdio.h>
#include <math.h>

#define DISTANCIA(x1, y1, x2, y2) (sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1))))

int main() {
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    printf("%.4f\n",  DISTANCIA(x1, y1, x2, y2));
    return 0;
}
