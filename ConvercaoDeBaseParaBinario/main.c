//
//  main.c
//  ConvercaoDeBase
//
//  Created by samuel rodrigues melo on 14/12/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int numero, bit[10];
    
    printf("Digite o numero que deseja converter para a base binaria\n");
    scanf("%d",&numero);
    
    for (int i = 7; i != 0; i--) {
        if (numero % 2 == 0){
            bit[i] = numero % 2;
        }
        else{
            bit[i] = 1;
        }
            
        numero = numero / 2;
        
        printf("%d \n", numero);
    }
    printf("\n");
    printf(" o valor em bit é:");
    for (int j = 0; j <= 7; j++) {
        
        printf("%d",bit[j]);
    }
    printf("\n");
}
