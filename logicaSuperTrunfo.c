#include <stdio.h>
#include <string.h>

int main() { 
    printf("Desafio super_trunfo.c \n");
    
    char estado[50];
    char codigo[50];
    char cidade[50];
    int população;
    float área;
    float PIB;
    int turísticos;
    float densidade;
    float PIBpercapita;  

    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int população2;
    float área2;
    float PIB2;
    int turísticos2;
    float densidade2;
    float PIBpercapita2;

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite seu codigo: \n");
    scanf("%s", &codigo);

    printf("Digite nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite a área; \n");
    scanf("%f", &área);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite os turísticos: \n");
    scanf("%d", &turísticos);

       // -----Cálculos da carta ---
    densidade = (float)população / área;
    PIBpercapita =  (PIB * 1000000000.0)/ população;
    
    printf("Digite o estado2: \n");      
    scanf("%s", &estado2);

    printf("Digite seu codigo2: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade2: \n");
    scanf("%s", &cidade2);

    printf("Digite a população2: \n");
    scanf("%d", &população2);

    printf("Digite a área2: \n");
    scanf("%f", &área2);

    printf("Digite o PIB2: \n");
    scanf("%f", &PIB2);

    printf("Digite o turísticos2:  \n");
    scanf("%d", &turísticos2);

    // comparação de dados
    printf("\n=== comparação de cartas (Atributo: População)===\n");
    printf("Carta 1 - %s (%s): %d habitantes \n", cidade, estado, população);
    printf("Carta 2 - %s (%s): %d habitantes \n", cidade2, estado2, população2);

    if(população > população2) {
      printf("\nResultado: Carta 1 (%s) venceu!\n", cidade);
    } else if (população2 > população) {
      printf("\nResultado da Carta 2 (%s) venceu!\n", cidade2);
    } else {
      printf("\nResultado: Empate! As duas cidades tem a mesma população.\n");
    }

    // -----Cálculos da carta ---
    densidade2 = (float) população2 / área2;
    PIBpercapita2 = (PIB2 * 1000000000.0)/ população2;



    printf("Nome do estado: %s\n - codigo da carta: %s\n", estado, codigo);
    printf("Nome da cidade: %s\n - Quantidade da população: %d\n", cidade, população);
    printf("Tamanho da área: %.2f km\n - Quantidade do PIB: %.2f bilhões\n", área, PIB);
    printf("Pontos turísticos: %d\n", turísticos);
    printf("Valor da densidade %.2f hab/km\n - Quantidade do PIBpercapita: %2.f reais \n", densidade , PIBpercapita);

    printf("Nome do estado2: %s\n - Codigo2 da carta: %d\n", estado2, codigo2);
    printf("Nome da cidade2: %s\n - Quantidade da população2: %d\n", cidade2, população2);
    printf("Tamanho da área2; %.2f km \n - Quantidade do PIB2: %.2f bilhões\n", área2, PIB2);
    printf("Pontos turísticos2: %d\n", turísticos2);
    printf("Valor da densidaade2 %.2f hab/km\n - Quantidade  do PIBpercapita2: %.2f reais\n", densidade2, PIBpercapita2);

    return 0;
}