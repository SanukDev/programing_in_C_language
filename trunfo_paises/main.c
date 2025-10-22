//
//  main.c
//  trunfo_paises
//
//  Created by Samuel Rodrigues Melo on 19/10/25.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// definido a struct
struct carta{
    char nome[64];
    float area_km;
    char capital[64];
    float pib;
    float pib_percapita;
    float renda_per_capita;
    float populacao;
    float dens_populacional;
    float exp_vida;
};
    
typedef struct carta Carta;
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("\n # ##### ######   ##   ##  ##   ##   #######  #####");
    printf("\n## ## ##  ##  ##  ##   ##  ###  ##    ##   # ### ###");
    printf("\n   ##     ##  ##  ##   ##  #### ##    ##     ##   ##");
    printf("\n   ##     #####   ##   ##  #######    ####   ##   ##");
    printf("\n   ##     ## ##   ##   ##  ## ####    ##     ##   ##");
    printf("\n   ##     ## ##   ##   ##  ##  ###    ##     ### ###");
    printf("\n  ####   #### ##   #####   ##   ##   ####     #####\n\n");
    
    Carta vet[100];
    int loop = 0;
    int cont = 0;
    while (loop != 1) {
        int cadastro = 0;
        int mostrar_cartas = 0;
        printf("Deseja cadastrar cartas? Digite 1 para continuar, ou 0 para mostrar as cartas ja cadastradas: ");
        scanf("%d", &cadastro);
        if (cadastro == 1) {
            printf("Digite o nome do pais: ");
            scanf("%s", vet[cont].nome);
            printf("Qual a capital: ");
            scanf("%s", vet[cont].capital);
            printf("Digite a area do pais: ");
            scanf("%f", &vet[cont].area_km);
            printf("Qual o PIB do pais: ");
            scanf("%f",&vet[cont].pib);
            printf("Qual a renda per capita: ");
            scanf("%f",&vet[cont].renda_per_capita);
            printf("Qual a populacao do pais? ");
            scanf("%f",&vet[cont].populacao);
            printf("Expectativa de vida: ");
            scanf("%f",&vet[cont].exp_vida);
        
            
            //calculando o PIB per capita
            vet[cont].pib_percapita = vet[cont].pib / vet[cont].populacao;
            //calculando a densidade populacional
            vet[cont].dens_populacional = vet[cont].populacao / vet[cont].area_km;
            cont++;
            
            printf("\nDigite 0 para cadastrar outra carta ou digite 1 para mostrar as cartas cadastradas: ");
            scanf("%d",&mostrar_cartas);
        }else{
            mostrar_cartas = 1;
        }

        // Mostrtando todas as cartas
        int fim_loop = 0;
        int cont_mostr_cart = 0;
        int fim_cartas = 0;
        if (mostrar_cartas == 1) {
            while (fim_loop != 1) {
                fim_cartas++;
                if (cont_mostr_cart  == cont ) {
                    printf("Nao existem mais cartas no seu baralho\n");
                    fim_loop = 1;
                }else{
                    printf("\n---------------------------------------------------\n");
                    printf("\n%dº Carta do baralho:\n",cont_mostr_cart+1);
                    printf("\n---------------------------------------------------\n");
                    printf("Nome: %s\n", vet[cont_mostr_cart].nome);
                    printf("---------------------------------------------------\n");
                    printf("Capital do pais: %s\n", vet[cont_mostr_cart].capital);
                    printf("---------------------------------------------------\n");
                    printf("Area em Kms: %.2f\n", vet[cont_mostr_cart].area_km);
                    printf("---------------------------------------------------\n");
                    printf("PIB: %.2f\n",vet[cont_mostr_cart].pib);
                    printf("---------------------------------------------------\n");
                    printf("Populacao: %.2f\n",vet[cont_mostr_cart].populacao);
                    printf("---------------------------------------------------\n");
                    printf("Expectativa de vida: %.2f\n", vet[cont_mostr_cart].exp_vida);
                    printf("---------------------------------------------------\n");
                    printf("Renda per capita: %.2f\n", vet[cont_mostr_cart].renda_per_capita);
                    printf("---------------------------------------------------\n");
                    printf("Densidade populacional: %2.f\n",vet[cont_mostr_cart].dens_populacional);
                    printf("---------------------------------------------------\n");
                    printf("PIB per capita: %.2f\n", vet[cont_mostr_cart].pib_percapita);
                    printf("---------------------------------------------------\n\n");
                    printf("\nDeseja imprimir mais uma carta? Digite 1 para nao e 0 para sim: ");
                    scanf("%d", &fim_loop);
                    printf("\n---------------------------------------------------\n");
                    
                }

                cont_mostr_cart++;
            }
        }
        
    }
    
    

}
