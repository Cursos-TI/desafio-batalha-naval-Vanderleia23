#include <stdio.h>

void tabuleiro (int tabuleiro [10][10]){
    char linha [10] = { 'A', 'B', 'C', 'D','E','F','G','H','I','J'};
    printf("### Tabuleiro Batalha Naval ### \n");
    printf(" ");
    printf(" ");
    for(int j = 0; j < 10; j++){
        printf("%c", linha[j]); //Imprime os numeros das colunas
        printf(" ");
    }
    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("%d ", i);
        for (int j = 0; j < 10; j++){
            printf ("%d", tabuleiro[i][j]);
            printf(" ");
        }
        printf ("\n");
    }
}

int main() {

    int batalhaNaval[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,}
    };

    batalhaNaval [1][3] = 3;
    batalhaNaval [1][4] = 3;
    batalhaNaval [1][5] = 3;

    batalhaNaval [4][2] = 3;
    batalhaNaval [5][2] = 3;
    batalhaNaval [6][2] = 3;

    batalhaNaval [5][6] = 3;
    batalhaNaval [5][7] = 3;
    batalhaNaval [5][8] = 3;

    batalhaNaval [7][6] = 3;
    batalhaNaval [7][7] = 3;
    batalhaNaval [7][8] = 3;

    tabuleiro(batalhaNaval);





    return 0;
}