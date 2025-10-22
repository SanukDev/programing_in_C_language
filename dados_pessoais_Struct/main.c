//
//  main.c
//  dados pessoais
//
//  Created by samuel rodrigues melo on 24/07/23.
//

/*
 faça um programa que leia os dados pessoais de 3 pessoas
 A - nome
 B - pesso
 C - altura
 D - idade
 
 o programa  deve imprimir o nome e aidade da primera pessoa e a altura e o pesso da ultima
 */
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>

struct pessoa{
    char nome[200];
    int idade;
    float peso;
    float altura;
};

int main(int argc, const char * argv[]) {
    struct pessoa lista[3];
    
    
    int i;
    
    for (i = 0; i < 3; i++) {
        printf("digite o nome da pessoa na posição: %d", i);
        scanf("%199[ˆ\n]s", lista[i].nome);
        
        printf("digite o nome da pessoa na posição: %d", i);
        scanf(" %d", &lista[i].idade);
        
        printf("digite o nome da pessoa na posição: %d", i);
        scanf("%f",&lista[i].peso);
        
        printf("informe a altura");
        scanf("%f", &lista[i].altura);
    }
   
}
