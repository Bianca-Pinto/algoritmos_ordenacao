// Funcoes relacionadas a vetores

#include <stdio.h>
#include <stdlib.h>
#include "funcoes_vetores.h"

void vetorAleatorio(int v[], int n){
    int i;
    for(i = 0; i < n; i++){
        v[i] = rand();
    }
}

void vetorCrescente(int v[], int n){
    int i;
    for(i = 0; i < n; i++){
        v[i] = i;
    }
}

void vetorDecrescente(int v[], int n){
    int i, b = n;
    for(i = 0; i < n; i++){
        v[i] = b;
        b--;
    }
}

void imprimirVetores(int v[], int n) {
    printf("\nVetor: ");
    for (int i = 0; i < n; i++) {
        printf("%d, ", v[i]);
    }
    printf("\n\n");
}
