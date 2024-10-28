#include <stdio.h>
#include <stdlib.h>

struct Retangulo {
    float comprimento;
    float largura;
    float area;
};

void carregarDados(struct Retangulo *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o comprimento do retangulo %d: ", i + 1);
        scanf("%f", &(vetor + i)->comprimento);

        printf("Digite a largura do retangulo %d: ", i + 1);
        scanf("%f", &(vetor + i)->largura);


        (vetor + i)->area = (vetor + i)->comprimento * (vetor + i)->largura;
    }
}


float calcularAreaTotal(struct Retangulo *vetor, int tamanho) {
    float areaTotal = 0;
    for (int i = 0; i < tamanho; i++) {
        areaTotal += (vetor + i)->area;
    }
    return areaTotal;
}

int main() {

    struct Retangulo retangulos[10];


    carregarDados(retangulos, 10);


    float totalArea = calcularAreaTotal(retangulos, 10);
    printf("A area total de todos os retangulos e: %.2f\n", totalArea);

    return 0;
}
