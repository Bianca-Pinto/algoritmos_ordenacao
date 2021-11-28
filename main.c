#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Todas as funcoes usadas foram separadas por .c e .h
#include "tempo_execucao.h"

int main(){
    // Testado int n = 30000 e n = 100000
    // Quicksort só funcionou com n = 30000
    int n = 10;

    //Atribuicao dos vetores:
    // vetor_r para valores 'aleatorios'
    // vetor_c para valores em ordem crescente
    // vetor_d para valores em ordem decrescente
    int vetor_r[n];
    int vetor_c[n];
    int vetor_d[n];

    vetorAleatorio(vetor_r,n);
    // A funcao imprimirVetores mostra os valores de cada posicao
    // Para usar, recomenda-se um tamanho de vetor pequeno para melhor visualizacao
    //imprimirVetores(vetor_r,n);

    vetorCrescente(vetor_c,n);
    //imprimirVetores(vetor_c,n);

    vetorDecrescente(vetor_d,n);
    //imprimirVetores(vetor_d,n);

    printf("\n===== RESULTADOS DOS EXPERIMENTOS =====\n");
    printf("\n##############################################\n");
    printf("\n\n===== EXPERIMENTO 1: ORDEM ALEATORIA =====\n\n");

    // Recomenda-se o teste de um algoritmo de ordenacao por vez
    // Pode usar o mesmo algoritmo para cada tipo de vetor

    //t_bubblesort(vetor_r,n);
    t_quicksort(vetor_r,0, n);
    //t_insertion_sort(vetor_r,n);
    //t_selection_sort(vetor_r, n);
    //t_mergesort(vetor_r, n);
    //t_heapsort(vetor_r, n);

    //Teste para visualizar vetor depois da ordenacao, escolher tamanho pequeno antes
    //imprimirVetores(vetor_r,n);


    printf("\n##############################################\n");
    printf("\n\n===== EXPERIMENTO 2: ORDEM CRESCENTE =====\n\n");

    //t_bubblesort(vetor_c,n);
    t_quicksort(vetor_c,0, n);
    //t_insertion_sort(vetor_c,n);
    //t_selection_sort(vetor_c, n);
    //t_mergesort(vetor_c, n);
    //t_heapsort(vetor_c, n);

    //Teste para visualizar vetor depois da ordenacao
    //imprimirVetores(vetor_c,n);

    printf("\n##############################################\n");
    printf("\n\n===== EXPERIMENTO 3: ORDEM DECRESCENTE =====\n\n");
    //t_bubblesort(vetor_d, n);
    t_quicksort(vetor_d,0, n);
    //t_insertion_sort(vetor_d,n);
    //t_selection_sort(vetor_d, n);
    //t_mergesort(vetor_d, n);
    //t_heapsort(vetor_d, n);

    //Teste para visualizar vetor depois da ordenacao
    //imprimirVetores(vetor_d,n);

    return 0;
}
