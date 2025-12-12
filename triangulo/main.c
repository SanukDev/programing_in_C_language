//
//  main.c
//  triangulo
//
//  Created by samuel rodrigues melo on 05/09/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*printf("   *\n");
    printf("  **\n");
    printf(" ***\n");
    printf("****\n");*/
    
    int i,j,c, n = 100;
    
    for (i = 1; i <= n; i++) {
        for (c = i; c <= n; c++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (j = 2; j <= i; j++) {
            printf("*");
        }
        printf("\n");
        

    }
    
    
}
