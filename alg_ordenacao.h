#define MIL 1000
#define CINM 5000
#define DEZM 10000
#define CEMM 100000
#define QUINM 500000
#define MI 1000000
#define MIQUIN 1500000

void bubblesort(int *vet, int n){
    int i,j,aux;
    for(i=0; i<n; i++){
        for (j=0; j<n-i-1; j++){
            if (vet[j]>vet[j+1]){
               aux = vet[j];
               vet[j] = vet[j+1];
               vet[j+1] = aux;
            }
        }
    }

}

void insertionsort(int *vet, int n){
    int i, j, eleito;

    for (i=1; i<n; i++){
        eleito = vet[i];
        j = i-1;
        while(j>=0 && eleito<vet[j]){
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = eleito;
    }
}

void merge(int *vet, int esq, int meio, int dir){
    int n1, n2, i, j, k;
    n1 = meio - esq + 1;
    n2 = dir - meio;

    int E[n1], D[n2];

    for(i=0; i<n1; i++){
        E[i] = vet[esq+i];
    }
    for(j=0; j<n2; j++){
        D[j] = vet[meio + 1 + j];
    }

    i=0; j=0;
    k = esq;

    while(i<n1 && j<n2){
        if(E[i]<=D[j]){
            vet[k] = E[i];
            i++;
        }
        else{
            vet[k] = D[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        vet[k] = E[i];
        i++;
        k++;
    }
    while(j<n2){
        vet[k] = D[j];
        j++;
        k++;
    }

}

void mergesort(int *vet, int esq, int dir){
    int meio;
    if(esq<dir){
        meio = (esq+(dir-1))/2;
        mergesort(vet,esq,meio);
        mergesort(vet,meio+1,dir);
        merge(vet,esq,meio,dir);
    }
}

int partition(int *vet, int inicio, int fim){
    int pivo,i,j,aux;

    pivo = vet[fim];
    i = inicio - 1;

    for (j = inicio; j <= fim-1; j++){
        if(vet[j]<=pivo){
            i++;
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
        }
    }
    aux = vet[i+1];
    vet[i+1] = vet[fim];
    vet[fim] = aux;
    return i+1;
}


void quicksort(int *vet, int inicio, int fim){
    int p;
    if(inicio<fim){
        p = partition(vet,inicio,fim);
        quicksort(vet,inicio,p-1);
        quicksort(vet,p+1,fim);
    }

}

void shellsort(int *vet, int n) {
    int i, j, valor;
    int gap = 1;

    while(gap < n){
        gap = 3*gap+1;
    }

    while(gap > 1){
        gap /= 3;
        for(i=gap; i<n; i++){
            valor = vet[i];
            j = i;
            while(j>=gap && valor<vet[j-gap]){
                vet[j] = vet[j-gap];
                j = j-gap;
            }
            vet[j] = valor;
        }
    }
}