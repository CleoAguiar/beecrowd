/** SUBMISSÃO # 29144993
 *
 * PROBLEMA: 1013 - O Maior
 * RESPOSTA: Accepted
 * LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 * TEMPO: 0.003s
 * TAMANHO: 250 Bytes
 * MEMÓRIA: -
 * SUBMISSÃO: 07/08/2022 13:19:33
 *
 */

#include <stdio.h>

int MaiorAB(a, b);

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d eh o maior\n", MaiorAB(MaiorAB(a, b), c));
    return 0;
}

int MaiorAB(int a, int b){
    return (a+b+abs(a-b))/2;
}
