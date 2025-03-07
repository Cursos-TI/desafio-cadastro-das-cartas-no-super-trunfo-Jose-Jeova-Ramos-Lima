#include <stdio.h>



int main() {
    printf("Desafio Super Trunfo - Aventureiro \n"); // saída de dados que mostra na tela o título do desafio

    char nome[50], nome2[50]; // declaração de variável do nome da cidade, tipo string
    int populacao, populacao2; // declaração de variável da população, tipo inteiro
    float area, area2; // declaração de variável da área, tipo flutuante
    float PIB, PIB2; // declaração de variável do PIB, tipo flutuante
    int pontos_turisticos, pontos_turisticos2; // declaração de variável dos pontos turíticos, tipo inteiro
    float densidade, densidade2; //declaração de variável da densidade populacional
    float PIB_PC, PIB_PC2; // declaração de variável do PIB Per Capita
    
    
    
    //Códigos de entrada da primeira carta
    
    printf("Digite o nome da primeira cidade: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir o nome da cidade
    scanf ("%s", &nome); // entrada de dados do nome da cidade inserida pelo usuário
    
    printf("Digite a população da cidade: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir a população
    scanf ("%d", &populacao); // entrada de dados da população inserida pelo usuário
    
    printf("Digite a área da cidade em km²: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir a área
    scanf ("%f", &area); // entrada de dados da área inserida pelo usuário
    
    printf("Digite o PIB da cidade em bilhões de reais: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir o PIB
    scanf ("%f", &PIB); // entrada de dados do PIB inserido pelo usuário
    
    printf("Digite o número de pontos turísticos da cidade: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir o número de pontos turísticos
    scanf ("%d", &pontos_turisticos); // entrada de dados do número de pontos turísticos inserido pelo usuário
    


    // Códigos de entrada da segunda carta

    printf("Digite o nome da segunda cidade: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir o nome da cidade
    scanf ("%s", &nome2); // entrada de dados do nome da cidade inserida pelo usuário
    
    printf("Digite a população da cidade: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir a população
    scanf ("%d", &populacao2); // entrada de dados da população inserida pelo usuário
    
    printf("Digite a área da cidade em km²: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir a área
    scanf ("%f", &area2); // entrada de dados da área inserida pelo usuário
    
    printf("Digite o PIB da cidade em bilhões de reais: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir o PIB
    scanf ("%f", &PIB2); // entrada de dados do PIB inserido pelo usuário
    
    printf("Digite o número de pontos turísticos da cidade: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir o número de pontos turísticos
    scanf ("%d", &pontos_turisticos2); // entrada de dados do número de pontos turísticos inserido pelo usuário






    //Códigos de saída da primeira carta

    printf("Cidade 1: %s\n", nome); // saída de dados que mostra o nome da cidade inserido pelo usuário
    
    printf("População: %d\n", populacao); // saída de dados que mostra a população insderida pelo usuário
    
    printf("Área: %.2f km²\n", area); // saída de dados que mostra a área inserida pelo usuário
    
    printf("PIB: %.2f bilhões de reais\n", PIB); // saída de dados que mostra o PIB inserido pelo usuário) 
    
    printf("Pontos turísticos: %d\n", pontos_turisticos); // saída de dados que mostra o número de pontos turísticos inserido pelo usuário

    densidade = (float) populacao / area; // fórmula de cáculo da densidade populacional
    printf("A densidade populacional é %.2f\n", densidade); //código de saída de dados para a densidade

    PIB_PC = (float) PIB / populacao; // fórmula de cáculo do PIB per capita
    printf("O PIB per capita é %.2f\n", PIB_PC); //código de saída de dados para o PIB per capita



    //Códigos de saída da segunda carta

    printf("Cidade 2: %s\n", nome2); // saída de dados que mostra o nome da cidade inserido pelo usuário
    
    printf("População: %d\n", populacao2); // saída de dados que mostra a população insderida pelo usuário
    
    printf("Área: %.2f km²\n", area2); // saída de dados que mostra a área inserida pelo usuário
    
    printf("PIB: %.2f bilhões de reais\n", PIB2); // saída de dados que mostra o PIB inserido pelo usuário) 
    
    printf("Pontos turísticos: %d\n", pontos_turisticos2); // saída de dados que mostra o número de pontos turísticos inserido pelo usuário

    densidade2 = (float) populacao2 / area2; // fórmula de cáculo da densidade populacional
    printf("A densidade populacional é %.2f\n", densidade2); //código de saída de dados para a densidade

    PIB_PC2 = (float) PIB2 / populacao2; // fórmula de cáculo do PIB per capita
    printf("O PIB per capita é: %.2f\n", PIB_PC2); //código de saída de dados para o PIB per capita






    
    return 0;
}
