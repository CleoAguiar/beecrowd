/** SUBMISSÃO # 29386899
 *
 * PROBLEMA: 1035 - Teste de Seleção 1
 * RESPOSTA: Accepted
 * LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 * TEMPO: 0.000s
 * TAMANHO: 306 Bytes
 * MEMÓRIA: -
 * SUBMISSÃO: 22/08/2022 00:00:13
 *
 */

#include <stdio.h>

#define ACEITO "Valores aceitos\n"
#define N_ACEITO "Valores nao aceitos\n"

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(b>c && d>a && c+d>a+b && c>0 && d>0 && a%2==0)
        printf(ACEITO);
    else printf(N_ACEITO);
    return 0;
}
