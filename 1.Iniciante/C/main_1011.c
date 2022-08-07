/** SUBMISSÃO # 29144752
 *
 * PROBLEMA: 1011 - Esfera
 * RESPOSTA: Accepted
 * LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 * TEMPO: 0.000s
 * TAMANHO: 215 Bytes
 * MEMÓRIA: -
 * SUBMISSÃO: 07/08/2022 12:44:52
 *
 */

 #include <stdio.h>

 #define PI 3.14159
 #define ESFERA(raio) (PI*raio*raio*raio*4.0/3.0)

int main() {
    float raio;
    scanf("%f", &raio);
    printf("VOLUME = %.3f\n", ESFERA(raio));
    return 0;
}
