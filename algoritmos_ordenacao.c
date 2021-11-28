// Algoritmos de Ordenacao

#include <stdio.h>
#include <stdlib.h>
#include "algoritmos_ordenacao.h"

#define true 1
#define false 0

void bubblesort(int v[], int tamanho){
    int swapped = false;
    int i, j;
    for(i = tamanho - 1; i > 0; i--){
        for(j = 0; j < i; j++){
            if(v[j] > v[i])
            {
                int temp;
                temp = v[j];
                v[j]= v[j+1];
                v[j+1] = temp;
                swapped = true;
                contarTrocas++;
            }
        }
        if(!swapped){
            break;
        }
        swapped = false;
    }

}

void quicksort(int v[],int inicio,int fim){
    int i = inicio, j = fim - 1, pivo = v[inicio], aux;
    while(i <= j){
        while((v[i] < pivo) && (i < fim))
            i++;
        while((v[j] > pivo) && (j > inicio))
            j--;
        if (i <= j){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i++;
            j--;
            contarTrocas++;
        }
    }
    if(j > inicio){
        quicksort(v, inicio, j+1);
    }
    if(i < fim){
        quicksort(v, i, fim);
    }
}

void insertion_sort(int v[], int n){
    int temp, i, j;
    for(i = 1; i < n; i++){
        temp = v[i];
        for (j = i - 1; j >= 0 && v[j] > temp; j--){
            v[j+1] = v[j];
            contarTrocas++;
        }
        v[j+1] = temp;
    }
}

void selection_sort(int v[], int n){
    int i, min, temp;
    for(i = 0; i < n; i++){
        min = i;
        for(int j = i + 1; j < n; j++){
            if(v[j] < v[min]){
                min = j;
            }
        }
        if(v[i] != v[min]){
            temp = v[i];
            v[i] = v[min];
            v[min] = temp;
        }
    }
}

void merge(int v[], int n){
    int meio;
    int i, j, k;
    int* tmp;
    tmp = (int*) malloc(n * sizeof(int));
    if (tmp == NULL){
        exit(1);
    }
    meio = n/2;
    i = 0;
    j = meio;
    k = 0;
    while(i< meio && j < n){
        if(v[i] < v[j]){
            tmp[k] = v[i];
            ++i;
        }
        else {
            tmp[k] = v[j];
            ++j;
        }
        ++k;
    }
    if (i == meio){
        while (j < n){
            tmp[k] = v[j];
            ++j;
            ++k;
        }
    }
    else {
        while(i < meio){
            tmp[k] = v[i];
            ++i;
            ++k;
        }
    }
    for (i = 0; i < n; ++i){
        v[i] = tmp[i];
    }
    free(tmp);
}

void mergesort (int v[], int n){
    int meio;
    if (n > 1){
        meio = n/2;
        mergesort(v, meio);
        mergesort(v + meio, n - meio);
        merge(v, n);
    }
}

/*void troca (int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}*/

//Transforma vetor em heap (arvore binaria)
/*void heapify (int v[], int m){
    for (int k = 1; k < m; ++k) {
        int f = k+1;
        while (f > 1 && v[f/2] < v[f]) {
            troca (&v[f/2], &v[f]);
            f /= 2;
        }
    }
}*/

/*void peneira (int v[], int m) {
    int p = 1, f = 2, x = v[1];
    while (f <= m) {
        if (f < m && v[f] < v[f + 1])
            ++f;
        if (x >= v[f]) {
        break;
    }
        v[p] = v[f];
        p = f;
        f = 2*p;
    }
    v[p] = x;
}*/

/*void heapsort (int v[], int x){
    int i;
    heapify (v,x);
    for (i = x; i >= 2; --i){
        troca (&v[1], &v[i]);
        peneira (v, i-1);
    }
}*/

