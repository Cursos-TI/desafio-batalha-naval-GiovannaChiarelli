#include <stdio.h>

// Função principal 
int main() {
int tabuleiro[10][10] = {0};

// Posicionar navio 1 na horizontal
for (int i = 0; i < 3; i++) {
    tabuleiro[2][i] = 3;
}

// Posicionar navio 2 na vertical
for (int i = 0; i < 3; i++) {
    tabuleiro[i][5] = 3;
}

// Posicionar navio 3 na diagonal principal
for (int i = 0; i < 3; i++) {
    tabuleiro[i][i] = 3;
}

// Posicionar navio 4 na diagonal secundária
for (int i = 0; i < 3; i++) {
    tabuleiro[i][9 - i] = 3;
}

// Mostrar o tabuleiro
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}

return 0;

}
