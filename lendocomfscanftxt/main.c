//
//  main.c
//  lendocomfscanftxt
//
//  Created by samuel rodrigues melo on 04/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *file;
    file = fopen("/Users/samuelrodriguesmelo/Desktop/teste.txt", "r");
    
    int vet[10],i;
    if(file){
        for (i = 0; i <= 10; i++) {
            fscanf(file, "%d", &vet[i]);
            printf("%d  ", vet[i]);
            
        }
    }
    
}
