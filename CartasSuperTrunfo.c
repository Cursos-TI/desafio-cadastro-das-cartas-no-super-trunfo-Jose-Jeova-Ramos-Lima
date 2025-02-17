#include <stdio.h>



int main() {
    printf("Desafio Super Trunfo - Novato \n"); // saída de dados que mostra na tela o título do desafio

    char nome[50] = "Gotham City do Batman"; // declaração de variável do nome da cidade, tipo string
    int populacao = 1000000; // declaração de variável da população, tipo inteiro
    double area = 12000.8; // declaração de variável da área, tipo flutuante
    double PIB = 500.8; // declaração de variável do PIB, tipo flutuante
    int pontos_turisticos = 2500000000; // declaração de variável dos pontos turíticos, tipo inteiro
    
    printf("Digite o nome da cidade: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir o nome da cidade
    scanf ("%s", &nome); // entrada de dados do nome da cidade inserida pelo usuário
    
    printf("Digite a população da cidade: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir a população
    scanf ("%d", &populacao); // entrada de dados da população inserida pelo usuário
    
    printf("Digite a área da cidade em km²: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir a área
    scanf ("%lf", &area); // entrada de dados da área inserida pelo usuário
    
    printf("Digite o PIB da cidade em bilhões de reais: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir o PIB
    scanf ("%lf", &PIB); // entrada de dados do PIB inserido pelo usuário
    
    printf("Digite o número de pontos turísticos da cidade: \n"); // saída de dados que mostra na tela a mensagem para o usuário inserir o número de pontos turísticos
    scanf ("%d", &pontos_turisticos); // entrada de dados do número de pontos turísticos inserido pelo usuário
    
    printf("Cidade: %s\n", nome); // saída de dados que mostra o nome da cidade inserido pelo usuário
    
    printf("População: %d\n", populacao); // saída de dados que mostra a população insderida pelo usuário
    
    printf("Área: %lf km²\n", area); // saída de dados que mostra a área inserida pelo usuário
    
    printf("PIB: %lf bilhões de reais\n", PIB); // saída de dados que mostra o PIB inserido pelo usuário) 
    
    printf("Pontos turísticos: %d\n", pontos_turisticos); // saída de dados que mostra o número de pontos turísticos inserido pelo usuário

    
    return 0;
}
