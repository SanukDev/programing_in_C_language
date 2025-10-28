//
//  main.c
//  criandoumarquivotxt
//
//  Created by samuel rodrigues melo on 30/09/23.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    FILE *file;
    char letra;
    
    // criando o arquivo para leitura e gravacao
    file = fopen("/Users/samuelrodriguesmelo/Desktop/teste.txt","w+" );
    
    
    //se a criacao do arquivo nao for igual a NULL
    if (file){
        printf("o arquivo foi criado com sucesso\n");
        printf("digite um texto e precione ENTER para continuar\n");
        scanf("%c", &letra);
        
        //para digitar e guardar um caracter de cada vez no arquivo ate que o usuario clique em ENTER
        while(letra != '\n'){
            fputc(letra, file);
            scanf("%c", &letra);
        }
        
        //funcao para voltar para o inicio do arquivo
        rewind(file);
        
        
        printf("\n\tarquivo\n");
        
        //para imprimir uma carcter de cada vez do arquivo
        while (!feof(file)) {
            letra = fgetc(file);
            printf("%c", letra);
        }
        printf("\n");
        
        
        //fechando o arquivo
        fclose(file);
    }
    else{
        printf("erro ao criar arquivo\n");
    }
}
