#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char estado1 , estado2;
    char codigo1[20], codigo2[20] , cidade1[20] , cidade2[20];
    unsigned long int populacao1 , populacao2;
    int turistico1 , turistico2 , opcao;
    float area1 , area2 , pib1 , pib2;
    float densidade1 , densidade2 , pibpercapita1 , pibpercapita2;
    
    
    // Cadastro da Carta 1:
    printf("Dados da Carta 1 \n");
    printf("Digite seu estado:");
    scanf(" %c" , &estado1);
    printf("Digita o codigo: ");
    scanf("%s" , codigo1);
    printf("Digita o nome da sua cidade: ");
    scanf("%s" , cidade1);
    printf("Digita a populacao: ");
    scanf("%lu" , &populacao1);
    printf("Digita a area da sua cidade: ");
    scanf("%f" , &area1);
    printf("Digita o PIB: ");
    scanf("%f" , &pib1);
    printf("Digita o numero de pontos turisticos: ");
    scanf("%d" , &turistico1);

    // Cadastro da Carta 2:
    printf("Dados da Carta 2 \n");
    printf("Digite seu estado: ");
    scanf(" %c" , &estado2);
    printf("Digita o codigo: ");
    scanf("%s" , codigo2);
    printf("Digita o nome da sua cidade: ");
    scanf("%s" , cidade2);
    printf("Digita a populacao: ");
    scanf("%lu" , &populacao2);
    printf("Digita a area da sua cidade: ");
    scanf("%f" , &area2);
    printf("Digita o PIB: ");
    scanf("%f" , &pib2);
    printf("Digita o numero de pontos turisticos: ");
    scanf("%d" , &turistico2);

    // Calculando as Variáveis
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    pibpercapita1 = (float) pib1 / populacao1;
    pibpercapita2 = (float) pib2 / populacao2;
    
    // Exibição dos Dados das Cartas:
    printf("Carta 1 \n");
    printf("Estado: %c \n" , estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("Populacao: %lu \n", populacao1);
    printf("Area: %.2f km \n", area1 );
    printf("PIB: %.2f \n", pib1);
    printf("Numero de Pontos turisticos: %d \n" , turistico1);
    printf("Densidade populacional: %f hab/km \n", densidade1);
    printf("PIB per capita: %f reais \n\n", pibpercapita1);

    printf("Carta 2 \n");
    printf("Estado: %c \n" , estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %lu \n", populacao2);
    printf("Area: %2.f km \n", area2 );
    printf("PIB: %2.f \n", pib2);
    printf("Numero de Pontos turisticos: %d \n" , turistico2);
    printf("Densidade populacional: %f hab/km \n", densidade2 );
    printf("PIB per capita: %f reais \n\n", pibpercapita2);


    printf("Escolha uma opção para comparação \n");
    printf("Opção 1 - População \n");
    printf("Opção 2 - Área \n");
    printf("Opção 3 - Pib \n");
    scanf("%d", &opcao);

    switch (opcao) { 
    


    case 1:
    printf("Comparação das Cartas - População \n");
        printf("Carta 1 , População: %lu \n", populacao1);
        printf("Carta 2 , População: %lu \n\n", populacao2);

        if (populacao1 > populacao2){
            printf("A Carta 1 venceu!");
        }
        else if (populacao1 < populacao2){
            printf("A Carta 2 venceu!");
        }
        else{
            printf(" Houve um empate!");
        } break;
        
    case 2:
     printf("Comparação das Cartas - Area \n");
        printf("Carta 1 , Area: %.3f \n", area1);
        printf("Carta 2 , Area: %.3f \n\n", area2);

        if (area1 > area2){
            printf("A Carta 1 venceu!");
        }
        else if (area1 < area2){
            printf("A Carta 2 venceu!");
        }
        else{
            printf(" Houve um empate!");
        } break;

    case 3:
     printf("Comparação das Cartas - Pib \n");
        printf("Carta 1 , Pib: %.2f \n", pib1);
        printf("Carta 2 , Pib: %.2f \n\n", pib2);

        if (pib1 > pib2){
            printf("A Carta 1 venceu!");
        }
        else if (pib1 < pib2){
            printf("A Carta 2 venceu!");
        }
        else{
            printf(" Houve um empate!");
        } break;
        default:
        printf("Opção inválida!");
        break;}

    
    return 0;
}