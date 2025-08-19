#include <stdio.h>


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
    printf("O PIB per capita é: %.2f milhões/hab \n", PIB_per_capita1);


    //Declaração do super poder da carta 1
    Super_poder1 = (float)Populacao1 + Area1 + PIB1 + (float)Pontos_turisticos1 + PIB_per_capita1 + (1.f / Densidade_populacional1);
    printf("O valor do seu Super poder é: %.4f Milhões \n", Super_poder1);


    
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
    printf("O PIB per capita é: %.2f milhões/hab \n", PIB_per_capita2);

 
    //Declaração do super poder da carta 2
    Super_poder2 = (float)Populacao2 + Area2 + PIB2 + (float)Pontos_turisticos2 + PIB_per_capita2 + (1.f / Densidade_populacional2);
    printf("O valor do seu Super poder é: %.4f Milhões \n", Super_poder2);

    
    
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

     //Exibição da carta Maior
     printf("\n");
     printf("Carta maior 1 Carta menor 0 \n");
     printf(" --- Qual carta vai vencer? --- ");
     printf("A População da carta 1 é maior ?: %d\n", Populacao1 > Populacao2);
     printf("A Area da carta 1 é maior ?: %d\n", Area1 > Area2);
     printf("O PIB da carta 1 é maior ?: %d\n", PIB1 > PIB2);
     printf("Os Pontos Turisticos da carta 1 é maior ?: %d\n", Pontos_turisticos1 > Pontos_turisticos2);
     printf("A Densidade Populacional da carta 1 é maior ?: %d\n", Densidade_populacional1 > Densidade_populacional2);
     printf("O PIB per capita da carta 1 é maior ?: %d\n", PIB_per_capita1 > PIB_per_capita2);
     printf("O Super Poder da carta 1  é maior ?: %d\n", Super_poder1 > Super_poder2);

     //Comparação dos atributos das cartas 1 e 2!
     printf("\n");

     printf(" ---- A Disputa Final! ---- \n");
     printf(" --- Quem sera o Vencedor ? --- \n");
     
     // População
     
    printf("Comparacao de Populacao: ");
    if (Populacao1 > Populacao2){
        printf("A População da cidade 1 é maior \n");
         vitorias_carta1++;
    } else {
        printf("A População da cidade 2 é maior \n");
        vitorias_carta2++;
    }  

     // Área
     
    printf("Comparacao de Area: ");
    if (Area1 > Area2){
        printf("A Area da cidade 1 é maior \n");
        vitorias_carta1++;
    } else {
        printf("A Area da cidade 2 é maior \n");
        vitorias_carta2++;
    }

     // PIB
    
    printf("Comparacao de PIB: ");
    if (PIB1 > PIB2){
        printf("O PIB da cidade 1 é maior \n");
        vitorias_carta1++;
    } else {
        printf("O PIB da cidade 2 é maior \n");
        vitorias_carta2++;
    }

     // PIB per capita
    
    printf("Comparacao de PIB per capita: ");
    if (PIB_per_capita1 > PIB_per_capita2){
        printf("O PIB per capita da cidade 1 é maior \n");
        vitorias_carta1++;
    } else {
        printf("O PIB per capita da cidade 2 é maior \n");
        vitorias_carta2++;
    }

     // Densidade populacional (menor é melhor)
    
    printf("Comparacao de Densidade populacional (menor vence): ");
    if (Densidade_populacional1 < Densidade_populacional2){
        printf("A densidade Populacional da cidade 1 é menor \n");
        vitorias_carta1++;
    } else {
        printf("A densidade Populacional da cidade 2 é menor \n");
        vitorias_carta2++;
    }

    // Super Poder

    printf("Comparacao de Super Poder: ");
    if (Super_poder1 > Super_poder2){
        printf("O Super Poder da cidade 1 é maior \n");
        vitorias_carta1++;
    } else {
        printf("O Super Poder da cidade 2 é maior \n");
        vitorias_carta2++;
    }

    // Exibe o placar final e o vencedor
    printf("\n");
    printf("\n--- Placar Final ---\n");
    printf("Vitorias da Carta 1: %d\n", vitorias_carta1);
    printf("Vitorias da Carta 2: %d\n", vitorias_carta2);

    if (vitorias_carta1 > vitorias_carta2) {
        printf("O VENCEDOR GERAL E A CARTA 1!\n");
    } else if (vitorias_carta2 > vitorias_carta1) {
        printf("O VENCEDOR GERAL E A CARTA 2!\n");
    } else {
        printf("O JOGO TERMINOU EM EMPATE!\n");
    }

     

    return 0;
}
