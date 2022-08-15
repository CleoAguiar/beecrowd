/** SUBMISSÃO # 29280280
 *
 * PROBLEMA: 1019 - Conversão de Tempo
 * RESPOSTA: Accepted
 * LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 * TEMPO: 0.000s
 * TAMANHO: 426 Bytes
 * MEMÓRIA: -
 * SUBMISSÃO: 15/08/2022 22:15:39
 *
 */

#include <stdio.h>

#define HORAS(segundos) ((segundos)/(60 * 60))
#define MINUTOS(segundos) ((segundos)/(60))
#define RESTO(segundos, n) ((segundos)%(n))

int main() {
    int n_duracao_segundos;
    scanf("%d", &n_duracao_segundos);
    printf("%d:%d:%d\n",
           HORAS(n_duracao_segundos),
           MINUTOS(RESTO(n_duracao_segundos, 60*60)),
           RESTO(n_duracao_segundos, 60));
    return 0;
}
