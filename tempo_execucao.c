// Funcoes destinadas a tempo de execucao

#include <time.h>
#include "tempo_execucao.h"

double start, stop, elapsed;

void t_bubblesort (int v[], int n){
    start = (double) clock() / CLOCKS_PER_SEC;
    bubblesort(v,n);
    stop = (double) clock() / CLOCKS_PER_SEC;
    elapsed = stop - start;
    printf("Numero de trocas usando Bubblesort: %d \n", contarTrocas);
    printf("Tempo total em segundos para Bubblesort: %f\n", elapsed);
}

void t_quicksort(int v[], int inicio, int fim){
    start = (double) clock () / CLOCKS_PER_SEC;
    quicksort(v,inicio,fim);
    stop = (double) clock() / CLOCKS_PER_SEC;
    elapsed = stop - start;
    //printf("Numero de trocas usando Quicksort: %d \n", contarTrocas);
    printf("Tempo total em segundos para Quicksort: %f\n", elapsed);
}

void t_insertion_sort (int v[], int n) {
    start = (double) clock() / CLOCKS_PER_SEC;
    insertion_sort(v, n);
    stop = (double) clock() / CLOCKS_PER_SEC;
    elapsed = stop - start;
    printf("Tempo total em segundos para Insertion sort: %f\n", elapsed);
}

void t_selection_sort(int v[], int n) {
    start = (double) clock() / CLOCKS_PER_SEC;
    selection_sort(v,n);
    stop = (double) clock() / CLOCKS_PER_SEC;
    elapsed = stop - start;
    printf("Tempo total em segundos para Selection sort: %f\n", elapsed);
}

void t_mergesort(int v[], int n) {
    start = (double) clock() / CLOCKS_PER_SEC;
    mergesort(v, n);
    stop = (double) clock() / CLOCKS_PER_SEC;
    elapsed = stop - start;
    printf("Tempo total em segundos para Mergesort: %f\n", elapsed);
}

void t_heapsort(int v[], int n) {
    start = (double) clock() / CLOCKS_PER_SEC;
    heapsort(v, n);
    stop = (double) clock() / CLOCKS_PER_SEC;
    elapsed = stop - start;
    printf("Tempo total em segundos para Heapsort: %f\n", elapsed);
}
