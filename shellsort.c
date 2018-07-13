#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "alg_ordenacao.h"

void teste_cre(double *media, int n){
    int i;
    int vet[n];
    double inicio,fim;

    for(i=0;i<n;i++){
        vet[i] = i+1;
    }
    inicio = clock();
    shellsort(vet,n);
    fim = clock();
    *media = *media + (fim-inicio)/(double)CLOCKS_PER_SEC;
}

void teste_dec(double *media, int n){
    int i;
    int vet[n];
    double inicio,fim;

    for(i=0;i<n;i++){
        vet[i] = n-i;
    }
    inicio = clock();
    shellsort(vet,n);
    fim = clock();
    *media = *media + (fim-inicio)/(double)CLOCKS_PER_SEC;
}

void teste_ale(double *media, int n){
    srand( (unsigned)time(NULL) );
    int i;
    int vet[n];
    double inicio,fim;

    for(i=0;i<n;i++){
        vet[i] = rand()%(n+1);
    }
    inicio = clock();
    shellsort(vet,n);
    fim = clock();
    *media = *media + (fim-inicio)/(double)CLOCKS_PER_SEC;
}

void teste_mil(double *media_cre, double *media_dec, double *media_ale){
    int i,n;
    *media_cre = 0;
    *media_dec = 0;
    *media_ale = 0;
    n = MIL;

    for(i=0; i<13; i++){
        teste_cre(media_cre,n);
    }
    *media_cre = *media_cre/13;

    for(i=0; i<13; i++){
        teste_dec(media_dec,n);
    }
    *media_dec = *media_dec/13;

    for(i=0; i<13; i++){
        teste_ale(media_ale,n);
    }
    *media_ale = *media_ale/13;
}

void teste_5mil(double *media_cre, double *media_dec, double *media_ale){
    int i,n;
    *media_cre = 0;
    *media_dec = 0;
    *media_ale = 0;
    n = CINM;

    for(i=0; i<13; i++){
        teste_cre(media_cre,n);
    }
    *media_cre = *media_cre/13;

    for(i=0; i<13; i++){
        teste_dec(media_dec,n);
    }
    *media_dec = *media_dec/13;

    for(i=0; i<13; i++){
        teste_ale(media_ale,n);
    }
    *media_ale = *media_ale/13;
}

void teste_10mil(double *media_cre, double *media_dec, double *media_ale){
    int i,n;
    *media_cre = 0;
    *media_dec = 0;
    *media_ale = 0;
    n = DEZM;

    for(i=0; i<13; i++){
        teste_cre(media_cre,n);
    }
    *media_cre = *media_cre/13;

    for(i=0; i<13; i++){
        teste_dec(media_dec,n);
    }
    *media_dec = *media_dec/13;

    for(i=0; i<13; i++){
        teste_ale(media_ale,n);
    }
    *media_ale = *media_ale/13;
}

void teste_100mil(double *media_cre, double *media_dec, double *media_ale){
    int i,n;
    *media_cre = 0;
    *media_dec = 0;
    *media_ale = 0;
    n = CEMM;

    for(i=0; i<13; i++){
        teste_cre(media_cre,n);
    }
    *media_cre = *media_cre/13;

    for(i=0; i<13; i++){
        teste_dec(media_dec,n);
    }
    *media_dec = *media_dec/13;

    for(i=0; i<13; i++){
        teste_ale(media_ale,n);
    }
    *media_ale = *media_ale/13;
}

void teste_500mil(double *media_cre, double *media_dec, double *media_ale){
    int i,n;
    *media_cre = 0;
    *media_dec = 0;
    *media_ale = 0;
    n = QUINM;

    for(i=0; i<13; i++){
        teste_cre(media_cre,n);
    }
    *media_cre = *media_cre/13;

    for(i=0; i<13; i++){
        teste_dec(media_dec,n);
    }
    *media_dec = *media_dec/13;

    for(i=0; i<13; i++){
        teste_ale(media_ale,n);
    }
    *media_ale = *media_ale/13;
}

void teste_1mi(double *media_cre, double *media_dec, double *media_ale){
    int i,n;
    *media_cre = 0;
    *media_dec = 0;
    *media_ale = 0;
    n = MI;

    for(i=0; i<13; i++){
        teste_cre(media_cre,n);
    }
    *media_cre = *media_cre/13;

    for(i=0; i<13; i++){
        teste_dec(media_dec,n);
    }
    *media_dec = *media_dec/13;

    for(i=0; i<13; i++){
        teste_ale(media_ale,n);
    }
    *media_ale = *media_ale/13;
}

void teste_15mi(double *media_cre, double *media_dec, double *media_ale){
    int i,n;
    *media_cre = 0;
    *media_dec = 0;
    *media_ale = 0;
    n = MIQUIN;

    for(i=0; i<13; i++){
        teste_cre(media_cre,n);
    }
    *media_cre = *media_cre/13;

    for(i=0; i<13; i++){
        teste_dec(media_dec,n);
    }
    *media_dec = *media_dec/13;

    for(i=0; i<13; i++){
        teste_ale(media_ale,n);
    }
    *media_ale = *media_ale/13;
}

int main(){
    double media_mil_cres, media_mil_dec, media_mil_ale;
    double media_5mil_cres, media_5mil_dec, media_5mil_ale;
    double media_10mil_cres, media_10mil_dec, media_10mil_ale;
    double media_100mil_cres, media_100mil_dec, media_100mil_ale;
    double media_500mil_cres, media_500mil_dec, media_500mil_ale;
    double media_1mi_cres, media_1mi_dec, media_1mi_ale;
    double media_15mi_cres, media_15mi_dec, media_15mi_ale;

    printf("Análise de tempo\n");
    printf("Algoritmo shell sort\n\n");

    teste_mil(&media_mil_cres, &media_mil_dec, &media_mil_ale);
    printf("Mil valores\n");
    printf("Valores crescentes: %lf\nValores decrescentes: %lf\nValores aleatorios: %lf\n\n", media_mil_cres, media_mil_dec, media_mil_ale);

    teste_5mil(&media_5mil_cres, &media_5mil_dec, &media_5mil_ale);
    printf("5 Mil valores\n");
    printf("Valores crescentes: %lf\nValores decrescentes: %lf\nValores aleatorios: %lf\n\n", media_5mil_cres, media_5mil_dec, media_5mil_ale);

    teste_10mil(&media_10mil_cres, &media_10mil_dec, &media_10mil_ale);
    printf("10 Mil valores\n");
    printf("Valores crescentes: %lf\nValores decrescentes: %lf\nValores aleatorios: %lf\n\n", media_10mil_cres, media_10mil_dec, media_10mil_ale);

    teste_100mil(&media_100mil_cres, &media_100mil_dec, &media_100mil_ale);
    printf("100 Mil valores\n");
    printf("Valores crescentes: %lf\nValores decrescentes: %lf\nValores aleatorios: %lf\n\n", media_100mil_cres, media_100mil_dec, media_100mil_ale);

    teste_500mil(&media_500mil_cres, &media_500mil_dec, &media_500mil_ale);
    printf("500 Mil valores\n");
    printf("Valores crescentes: %lf\nValores decrescentes: %lf\nValores aleatorios: %lf\n\n", media_500mil_cres, media_500mil_dec, media_500mil_ale);

    teste_1mi(&media_1mi_cres, &media_1mi_dec, &media_1mi_ale);
    printf("1 Milhao de valores\n");
    printf("Valores crescentes: %lf\nValores decrescentes: %lf\nValores aleatorios: %lf\n\n", media_1mi_cres, media_1mi_dec, media_1mi_ale);

    teste_15mi(&media_15mi_cres, &media_15mi_dec, &media_15mi_ale);
    printf("1.5 Milhoes de valores\n");
    printf("Valores crescentes: %lf\nValores decrescentes: %lf\nValores aleatorios: %lf\n\n", media_15mi_cres, media_15mi_dec, media_15mi_ale);

    return 0;
}