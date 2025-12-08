//
//  main.c
//  energia e custo
//
//  Created by samuel rodrigues melo on 13/07/23.
//
/*
 sabe se  que um quilowatt custa um milisimo do salario minimo. Faça um programa que receba o valor do salrio minimo e a quantidade de quilowatts gastos por uma casa. O programa deve calcular e retornar avlores atraves de parametros
 A - o valor em reai de cada quilowatts
 B - o valor em reis a ser pago pela casa
 C - o valor com desconto de 15%
 */

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
float quilowatt (float salario){
    return salario / 1000;
}

float valor (float sala, float quilo){
    return sala * quilo;
}

float desconto (float desconto){
    return desconto * 15 / 100;
}




int main(int argc, const char * argv[]) {
    float salari, descon, quilo, valoreal, valorqulo, pagar;

    printf("digite o valor do salraio minimo em R$:\n");
    scanf("%f",&salari);
    
    printf("digite quantos quilowatts a sua residencia consumiu:\n");
    scanf("%f",&quilo);
    
    valorqulo = quilowatt(salari);
    
    valoreal = valor(valorqulo, quilo);
    
    descon = desconto(valoreal);
    
    pagar = valoreal - descon;
    
    printf("o valor por quilowatt é: %.2f\n", valorqulo);
    
    printf("o valor a ser pago é: %.2f\n", valoreal);
    
    printf("o valor com desconto de 15 porcento é: %.2f\n", pagar);
}
