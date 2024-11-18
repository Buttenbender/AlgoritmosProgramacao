/*
* Programa: Atv2.c
* Descrição: Faça a multiplicação de todos os elementos da matriz acima por 7.
* Autor: João Pedro Büttenbender da Silva
* Data de criação: 18/11/2024
* Última modificação: 18/11/2024
*/

#include <stdio.h>

int main() {
    int v1[] = {1, 5, 9, 2, 5};
    int v2[] = {7, 4, 13, 21, 6};
    int v3[] = {8, -3, 5, 7, 12};
    
    int M[3][5];
    
    for (int i = 0; i < 5; i++) {
        M[0][i] = v1[i];
        M[1][i] = v2[i];
        M[2][i] = v3[i];
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            M[i][j] *= 7;
        }
    }
    
    printf("Matriz M (multiplicada por 7):\n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}