//
//  main.c
//  probabilidade
//
//  Created by samuel rodrigues melo on 22/07/23.
//

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    float favor, total, p;
    
    printf("digite quantas opções favoraveis\n");
    scanf("%f", &favor);
    
    printf("digite o numero de opções totais\n");
    scanf("%f", &total);
    
    p = favor / total * 100;
    
    printf("a probabilidade de acerto é: %.2f%% \n",p);
    
    
    
}
