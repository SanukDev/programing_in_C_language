//
//  main.c
//  numeros primos
//
//  Created by samuel rodrigues melo on 14/07/23.
//

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int vet[9], i, j, cont;
    
    
    
    for (i = 1; i <= 9; i++){
        printf("digite um numero primo\n");
        scanf("%d", &vet[i]);
    }
    
    
    
    for (i = 1; i <= 9; i++){
        cont = 0;
        for (j = 1; j <= vet[i]; j++) {
            if ( vet[i] % j == 0){
                cont++;
            }
            
        }
        if ( cont == 2){
            printf("o numero: %d é primo\n", vet[i]);
        }
        else{
            printf("o numero não é primo\n");
        }
    }
}
