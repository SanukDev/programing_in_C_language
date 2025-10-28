//
//  main.c
//  dowhile
//
//  Created by samuel rodrigues melo on 24/08/23.
//

#include <stdio.h>
//Iniciando programa.
int main(int argc, const char * argv[]) {
    
//Declarando variaveis.
    int fat, cont, numero;
   
//Coletando dados.
    printf("Dgite um numero pra calcular o fatorial:\n");
    scanf("%d", &numero);
    
//Atribuindo valores as variaveis.
    fat = 1;
    cont = numero;
    
//Processando dados.
    do {
        fat = fat * numero;
        numero--;
        cont--;
    } while (cont != 0);
    
//Imprimindo resultado.
    printf("o valor é: %d\n", fat);
}
//Finalizando programa.
