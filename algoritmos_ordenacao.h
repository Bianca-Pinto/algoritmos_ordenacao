// Algoritmos de Ordenacao

#ifndef ALGORITMOS_ORDENACAO_ALGORITMOS_ORDENACAO_H
#define ALGORITMOS_ORDENACAO_ALGORITMOS_ORDENACAO_H

#include "funcoes_vetores.h"

int contarTrocas;

void bubblesort(int v[], int tamanho);
void quicksort(int v[],int inicio,int fim);
void insertion_sort(int v[], int n);
void selection_sort(int v[], int n);

void merge(int v[], int n);
void mergesort (int v[], int n);

void troca (int *a, int *b);
void heapify (int v[], int m);
void peneira (int v[], int m);
void heapsort (int v[], int x);

#endif //ALGORITMOS_ORDENACAO_ALGORITMOS_ORDENACAO_H
