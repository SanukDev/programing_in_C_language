//
//  main.c
//  triangulo2
//
//  Created by samuel rodrigues melo on 26/09/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,j,c, n = 30;
    
    for (i = 1; i <= n; i++) {
        for (c = i; c <= n; c++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        
        printf("\n");
        

    }
}
