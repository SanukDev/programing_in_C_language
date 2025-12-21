//
//  main.c
//  triangulooco
//
//  Created by samuel rodrigues melo on 28/09/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,j,c,r, n = 20;
    
    for (i = 1; i <= n; i++) {
        for (c = i; c <= n; c++) {
            printf(" ");
        }
        for (j = 1; j <= 1; j++) {
            printf("* ");
        }
        for (r = 3; r <= i; r++) {
            printf(" ");
        }
        for (r = 3; r <= i; r++) {
            printf(" ");
        }
        for (j = 1; j <= 1; j++) {
            printf("* ");
            
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 1; j++) {
            printf("* ");
            
            
            
        }
    }
    printf("* ");
    printf("\n");
}
