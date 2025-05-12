#include <stdio.h>
#include "volume.h"

int main() {
    float largura, profundidade, altura, raio;
    printf("Largura: ");
    scanf("%f", &largura);
    printf("Profundidade: ");
    scanf("%f", &profundidade);
    printf("Altura: ");
    scanf("%f", &altura);
    printf("Raio: ");
    scanf("%f", &raio);

    printf("Volume do cubo: %.2f\n", cubo(largura));
    printf("Volume do paralelepípedo: %.2f\n", paralelepipedo(largura, profundidade, altura));
    printf("Volume da esfera: %.2f\n", esfera(raio));
    printf("Volume do cilindro: %.2f\n", cilindro(raio, altura));
    printf("Volume da pirâmide: %.2f\n", piramide(largura, profundidade, altura));

    return 0;
}
