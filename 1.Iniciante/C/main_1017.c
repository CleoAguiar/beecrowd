/** SUBMISSÃO # 29145415
 *
 * PROBLEMA: 1017 - Gasto de Combustível
 * RESPOSTA: Accepted
 * LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 * TEMPO: 0.000s
 * TAMANHO: 244 Bytes
 * MEMÓRIA: -
 * SUBMISSÃO: 07/08/2022 13:59:23
 *
 */

#include <stdio.h>

#define AUTO 12.0
#define LITROS(v, t) (v*t/AUTO)

int main() {
    int tempo, velocidade_media;
    scanf("%d %d", &tempo, &velocidade_media);
    printf("%.3f\n", LITROS(velocidade_media, tempo));
    return 0;
}
