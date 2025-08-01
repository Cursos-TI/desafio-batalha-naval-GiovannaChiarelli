#include <stdio.h>
#define T 10
#define H 5

void criaCone(int c[H][H]){
    for(int i=0;i<H;i++)
        for(int j=0;j<H;j++)
            c[i][j] = (j >= 2 - i && j <= 2 + i) ? 1 : 0;
}

void criaCruz(int c[H][H]){
    for(int i=0;i<H;i++)
        for(int j=0;j<H;j++)
            c[i][j] = (i==2 || j==2) ? 1 : 0;
}

void criaOctaedro(int o[H][H]){
    for(int i=0;i<H;i++)
        for(int j=0;j<H;j++)
            o[i][j] = (abs(i-2)+abs(j-2) <= 2) ? 1 : 0;
}

void aplica(int tab[T][T], int hab[H][H], int x, int y){
    int off = H/2;
    for(int i=0;i<H;i++)
        for(int j=0;j<H;j++){
            int lx = x - off + i;
            int ly = y - off + j;
            if(lx>=0 && lx<T && ly>=0 && ly<T && hab[i][j]==1 && tab[lx][ly]==0)
                tab[lx][ly] = 5;
        }
}

void mostra(int tab[T][T]){
    for(int i=0;i<T;i++){
        for(int j=0;j<T;j++){
            if(tab[i][j]==0) printf("~ ");
            else if(tab[i][j]==3) printf("N ");
            else if(tab[i][j]==5) printf("* ");
            else printf("? ");
        }
        printf("\n");
    }
}

int main(){
    int tab[T][T] = {0};
    tab[2][3]=3; tab[2][4]=3; tab[5][5]=3; tab[6][5]=3; tab[6][6]=3;

    int cone[H][H], cruz[H][H], octa[H][H];
    criaCone(cone);
    criaCruz(cruz);
    criaOctaedro(octa);

    aplica(tab, cone, 1, 3);
    aplica(tab, cruz, 5, 5);
    aplica(tab, octa, 7, 7);

    mostra(tab);
    return 0;
}
