#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf ("cartas super trunfo!\n");
    #include <stdio.h>

typedef struct {
    char estado;          // Estado da carta (letra de A a H)
    char codigo[4];       // Código da carta (ex: A01, B03)
    char nomeCidade[100]; // Nome da cidade
    int populacao;        // População da cidade
    float area;           // Área da cidade em km²
    float pib;            // PIB da cidade
    int pontosTuristicos; // Número de pontos turísticos
} Carta;

// Função para exibir as informações de uma carta
void exibirCarta(Carta c) {
    printf("\nCarta:\n");
    printf("Estado: %c\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.nomeCidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontosTuristicos);
}

int main() {
    Carta carta1, carta2;
    
    // Entrada de dados para a carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta1.estado); // O espaço antes de %c é para consumir o caractere de nova linha deixado pelo Enter
    printf("Código (ex: A01, B02, etc): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // Ler string com espaços
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    
    // Exibir as informações da carta 1
    exibirCarta(carta1);
    
    // Entrada de dados para a carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);
    printf("Código (ex: A01, B02, etc): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    
    // Exibir as informações da carta 2
    exibirCarta(carta2);
    
    return 0;
}
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
