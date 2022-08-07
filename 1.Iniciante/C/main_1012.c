/** SUBMISSÃO # 29144889
 *
 * PROBLEMA: 1012 - Área
 * RESPOSTA: Accepted
 * LINGUAGEM: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
 * TEMPO: 0.000s
 * TAMANHO: 635 Bytes
 * MEMÓRIA: -
 * SUBMISSÃO: 07/08/2022 13:05:46
 *
 */

 #include <stdio.h>

 #define PI 3.14159
 #define TRI_RETANGULO(baseA, alturaC) (baseA*alturaC/2.0)
 #define CIRCULO(raioC) (PI*raioC*raioC)
 #define TRAPEZIO(baseA, baseB, alturaC) ((baseA +baseB)*alturaC/2.0)
 #define QUADRADO(ladoB) (ladoB*ladoB)
 #define RETANGULO(ladoA, ladoB) (ladoA*ladoB)

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",
           TRI_RETANGULO(a, c),
           CIRCULO(c),
           TRAPEZIO(a, b, c),
           QUADRADO(b),
           RETANGULO(a, b));
    return 0;
}
