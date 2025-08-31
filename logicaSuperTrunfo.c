#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    printf("Desafio super trunfo paises! \n");
    printf("novo commit\n");
    printf("\n");

    //Declaracao de varial para carta 1!
    char Estado1[25], Codigo1[10], Cidade1[30];
    int Populacao1, Pontos_turisticos1;
    float Area1, PIB1;
    float Densidade_populacional1;
    float PIB_per_capita1;
    float Super_poder1;

    //Declaracao de variavel para carta 2!
    char Estado2[30], Codigo2[10], Cidade2[30];
    int Populacao2, Pontos_turisticos2;
    float Area2, PIB2;
    float Densidade_populacional2;
    float PIB_per_capita2;
    float Super_poder2;

    // Variaveis para o placar final
    int vitorias_carta1 = 0;
    int vitorias_carta2 = 0;
    
    // Variavel para a escolha do jogador
    int escolha;

    
    //Cadastro da primeira carta!
    printf("\n");
    printf("--- Cadastro da primeira Carta ---\n");

    printf("Digite o estado (A-H): \n");
    scanf("%s", Estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite o numero de populacao: \n");
    scanf("%d", &Populacao1);

    printf("Digite a area: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite quantos pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos1);

    //Densidade populacional e PIB per capita carta 1
    printf("\n");
    Densidade_populacional1 = (float)Populacao1 / Area1;
    printf("A densidade Populacional é: %.2f hab. km² \n", Densidade_populacional1);

    PIB_per_capita1 = PIB1 / (float)Populacao1;
    printf("O PIB per capita é: %.2f milhoes/hab \n", PIB_per_capita1);


    //Declaração do super poder da carta 1
    Super_poder1 = (float)Populacao1 + Area1 + PIB1 + (float)Pontos_turisticos1 + PIB_per_capita1 + (1.f / Densidade_populacional1);
    printf("O valor do seu Super poder é: %.4f Milhoes \n", Super_poder1);


    
    //Cadastro da segunda carta!
    printf("\n");
    printf(" --- Cadastro da segunda carta ---\n");

    printf("Digite o estado (A-H): \n");
    scanf("%s", Estado2);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo2);

    printf("Digite sua Cidade: \n");
    scanf("%s", Cidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &Populacao2);

    printf("Digite sua Area: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos2);

    //Densidade populacional e PIB per capita carta 2
    printf("\n");
    Densidade_populacional2 = Populacao2 / Area2;
    printf("A densidade Populacional é: %.2f hab/km² \n", Densidade_populacional2);

    PIB_per_capita2 = (PIB2 / Populacao2);
    printf("O PIB per capita é: %.2f milhoes/hab \n", PIB_per_capita2);

 
    //Declaração do super poder da carta 2
    Super_poder2 = (float)Populacao2 + Area2 + PIB2 + (float)Pontos_turisticos2 + PIB_per_capita2 + (1.f / Densidade_populacional2);
    printf("O valor do seu Super poder é: %.4f Milhoes \n", Super_poder2);

    
    
    //Exibicoes das informacoes da Carta 1!
    printf("\n");
     printf("--- CARTA 1 --- \n");
     printf("Estado: %s\n", Estado1);
     printf("Codigo: %s\n", Codigo1);
     printf("Cidade: %s\n", Cidade1);
     printf("Populacao: %d\n", Populacao1);
     printf("Area: %2f km\n", Area1);
     printf("PIB: %2f milhoes\n", PIB1);
     printf("Pontos Turisticos: %d\n", Pontos_turisticos1);
     printf("Densidade Populacional: %.2f \n", Densidade_populacional1);
     printf("PIB per capita: %.2f \n", PIB_per_capita1);
     printf("Super Poder: %.4f \n", Super_poder1);
     
     
     //Exibicoes das informacoes da Carta 2!
     printf("\n");
     printf("--- CARTA 2 --- \n");
     printf("Estado: %s\n", Estado2);
     printf("Codigo: %s\n", Codigo2);
     printf("Cidade: %s\n", Cidade2);
     printf("Populacao: %d\n", Populacao2);
     printf("Area: %2f km\n",Area2);
     printf("PIB: %2f milhoes\n", PIB2);
     printf("Pontos Turisticos: %d \n", Pontos_turisticos2);
     printf("Densidade Populacional: %.2f \n", Densidade_populacional2);
     printf("PIB per capita: %.2f \n", PIB_per_capita2);
     printf("Super Poder: %.4f \n", Super_poder2);


    // --- NOVO: Menu Interativo e Switch ---
    printf("\n");
    printf("--- Escolha o atributo para a disputa ---\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Estrutura switch para a escolha do jogador
    switch(escolha) {
        case 1:
            // Comparação de População
            printf("\n--- Comparacao de Populacao ---\n");
            if (Populacao1 > Populacao2) {
                printf("A CARTA 1 venceu com Populacao!\n");
                vitorias_carta1++;
            } else if (Populacao2 > Populacao1) {
                printf("A CARTA 2 venceu com Populacao!\n");
                vitorias_carta2++;
            } else {
                printf("Empate em Populacao!\n");
            }
            break;

        case 2:
            // Comparação de Area
            printf("\n--- Comparacao de Area ---\n");
            if (Area1 > Area2) {
                printf("A CARTA 1 venceu com Area!\n");
                vitorias_carta1++;
            } else if (Area2 > Area1) {
                printf("A CARTA 2 venceu com Area!\n");
                vitorias_carta2++;
            } else {
                printf("Empate em Area!\n");
            }
            break;

        case 3:
            // Comparação de PIB
            printf("\n--- Comparacao de PIB ---\n");
            if (PIB1 > PIB2) {
                printf("A CARTA 1 venceu com PIB!\n");
                vitorias_carta1++;
            } else if (PIB2 > PIB1) {
                printf("A CARTA 2 venceu com PIB!\n");
                vitorias_carta2++;
            } else {
                printf("Empate em PIB!\n");
            }
            break;

        case 4:
            // Comparação de Pontos Turisticos
            printf("\n--- Comparacao de Pontos Turisticos ---\n");
            if (Pontos_turisticos1 > Pontos_turisticos2) {
                printf("A CARTA 1 venceu com Pontos Turisticos!\n");
                vitorias_carta1++;
            } else if (Pontos_turisticos2 > Pontos_turisticos1) {
                printf("A CARTA 2 venceu com Pontos Turisticos!\n");
                vitorias_carta2++;
            } else {
                printf("Empate em Pontos Turisticos!\n");
            }
            break;

        case 5:
            // Comparação de Densidade Populacional (menor vence)
            printf("\n--- Comparacao de Densidade Populacional ---\n");
            if (Densidade_populacional1 < Densidade_populacional2) {
                printf("A CARTA 1 venceu com Densidade Populacional (menor vence)!\n");
                vitorias_carta1++;
            } else if (Densidade_populacional2 < Densidade_populacional1) {
                printf("A CARTA 2 venceu com Densidade Populacional (menor vence)!\n");
                vitorias_carta2++;
            } else {
                printf("Empate em Densidade Populacional!\n");
            }
            break;

        case 6:
            // Comparação de PIB per capita
            printf("\n--- Comparacao de PIB per capita ---\n");
            if (PIB_per_capita1 > PIB_per_capita2) {
                printf("A CARTA 1 venceu com PIB per capita!\n");
                vitorias_carta1++;
            } else if (PIB_per_capita2 > PIB_per_capita1) {
                printf("A CARTA 2 venceu com PIB per capita!\n");
                vitorias_carta2++;
            } else {
                printf("Empate em PIB per capita!\n");
            }
            break;

        case 7:
            // Comparação de Super Poder
            printf("\n--- Comparacao de Super Poder ---\n");
            if (Super_poder1 > Super_poder2) {
                printf("A CARTA 1 venceu com Super Poder!\n");
                vitorias_carta1++;
            } else if (Super_poder2 > Super_poder1) {
                printf("A CARTA 2 venceu com Super Poder!\n");
                vitorias_carta2++;
            } else {
                printf("Empate em Super Poder!\n");
            }
            break;

        default:
            printf("\nOpcao invalida. Por favor, escolha um numero de 1 a 7.\n");
            break;
    }

    // --- Fim da seção do switch ---
    
    // O placar final e o vencedor geral agora sao calculados de forma diferente.
    // Você pode decidir se quer que a disputa seja de apenas uma rodada ou varias.
    // Se for apenas uma rodada, o placar final nao faz tanto sentido.
    // Se for para mais rodadas, você precisará de um loop (while, for) para repetir o menu.

    // Exibe o placar final
    printf("\n");
    printf("\n--- Placar Atual ---\n");
    printf("Vitorias da Carta 1: %d\n", vitorias_carta1);
    printf("Vitorias da Carta 2: %d\n", vitorias_carta2);
     

    return 0;
}
