#include <stdio.h>

// Torre com recursão 
void moverTorre(int casas) {
    if (casas == 0) return; 
    printf("Direita\n");
    moverTorre(casas - 1); 
}

// Rainha com recursão
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo recursão e loop aninhado
void moverBispo(int vertical, int horizontal) {
    for (int i = 0; i < vertical; i++) {          
        for (int j = 0; j < horizontal; j++) {   
            printf("Cima, Direita\n");
        }
    }
}

// Cavalo loop aninhado
void moverCavalo(int movimentos) {
    for (int k = 0; k < movimentos; k++) {   
        for (int i = 0; i < 2; i++) {       
            printf("Cima\n");
        }
        for (int j = 0; j < 1; j++) {       
            printf("Direita\n");
        }
    }
}

// Inicialização do programa 
int main() {
    // Definição dos valores
    int casasTorre   = 5;
    int casasRainha  = 8;
    int bispoVertical = 5;
    int bispoHorizontal = 1; 
    int movimentosCavalo = 1;

    // Torre
    printf("Movimentos da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Rainha
    printf("Movimentos da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Bispo
    printf("Movimentos do Bispo:\n");
    moverBispo(bispoVertical, bispoHorizontal);
    printf("\n");

    // Cavalo
    printf("Movimentos do Cavalo:\n");
    moverCavalo(movimentosCavalo);
    printf("\n");

    return 0;
}
