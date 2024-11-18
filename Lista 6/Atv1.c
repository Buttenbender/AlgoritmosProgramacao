/*
* Programa: Atv1.c
* Descrição: Dados os vetores 𝑣1 = [1,5,9,2,5], 𝑣2 = [7,4,13,21,6] e 𝑣3 = [8, −3,5,7,12], faça um programa
* que copie o conteúdo dos vetores dados para uma matriz de tamanho 3x5 de forma a obter o
* seguinte resultado:
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
    
    printf("Matriz M:\n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}