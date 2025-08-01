#include <stdio.h>

int main() { 
int tabuleiro[10][10];
int i, j;

for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
        tabuleiro[i][j] = 0;
    }
}

int navio_horizontal[3] = {3, 3, 3};
int navio_vertical[3] = {3, 3, 3};

int linha_h = 2;
int coluna_h = 4;
int linha_v = 5;
int coluna_v = 7;

for (i = 0; i < 3; i++) {
    tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
    tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
}

for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}

return 0;

}
