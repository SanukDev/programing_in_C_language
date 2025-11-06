//
//  main.c
//  tabuadadowhile
//
//  Created by samuel rodrigues melo on 25/08/23.
//
/*
 faça um programa que imprima na tela a tabuada do numero que o usuario escolher usando {do while}
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, cont, numero, mult;
    cont = 1;
    i = 0;
    
 // coletando dados
    printf("informe o numero para ser calculada a tabuada:\n");
    scanf("%d", &numero);
    
// Processando dados
    do {
        i++;
        mult = numero * i;
        cont++;
        
        printf("%d x %d = %d\n", numero, i, mult);
    } while (cont != 11);
    
    
}
