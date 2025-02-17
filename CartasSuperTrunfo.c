#include <stdio.h>



int main() {
    printf("Desafio Super Trunfo - Novato \n"); // saída de dados que mostra na tela o título do desafio

    char nome[200] = "Gotham City do Batman"; // declaração de variável do nome da cidade, tipo string
    int população = 100000000000; // declaração de variável da população, tipo inteiro
    double área = 12000000.8; // declaração de variável da área, tipo flutuante
    float PIB = 500.8; // declaração de variável do PIB, tipo flutuante
    int pontos_turísticos = 2500000000000000; // declaração de variável dos pontos turíticos, tipo inteiro

    printf("Digite a população da cidade: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir a população
    scanf ("%d", &população); // entrada de dados da população inserida pelo usuário

    printf("Digite a área da cidade em km²: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir a área
    scanf ("%f", &área); // entrada de dados da área inserida pelo usuário

    printf("Digite o PIB da cidade em bilhões de reais: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir o PIB
    scanf ("%f", &PIB); // entrada de dados do PIB inserido pelo usuário

    printf("Digite o número de pontos turísticos da cidade: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir o número de pontos turísticos
    scanf ("%d", &pontos_turísticos); // entrada de dados do número de pontos turísticos inserido pelo usuário

    printf("Cidade: %s\n", nome); // saída de dados que mostra o nome da cidade inserido pelo usuário
    printf("População: %d\ n", população); // saída de dados que mostra a população insderida pelo usuário
    printf("Área: %f km²\n", área); // saída de dados que mostra a área inserida pelo usuário
    printf("PIB: %f bilhões de reais\n", PIB); // saída de dados que mostra o PIB inserido pelo usuário) 
    printf("Pontos turísticos: %d\n", pontos_turísticos); // saída de dados que mostra o número de pontos turísticos inserido pelo usuário

    
    return 0;
}