//
//  main.c
//  matizes
//
//  Created by samuel rodrigues melo on 20/07/23.
//

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int  mat[3][3];
    int i, j, x, linha, coluna, achou ;
    
    achou = 0;
    j = 0;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("digite o valor da linha %d e coluna %d :\n", i, j);
            scanf(" %d",&mat[i][j]);
        }
    }
    printf("digite a chave de busca:\n");
    scanf("%d", &x);
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
            if (mat[i][j] == x){
                achou = 1;
                linha = i;
                coluna = j;
                break;
            }
            
        }
   
        if(achou == 1){
            printf("o elemento %d foi encontrado na linha %d e na coluna %d\n", x, i, j);
            break;
        }
        else{
            printf("o elemento não foi encontrado\n");
        }
    }
}
