#include <stdio.h>

int main(){
   /*
   Criando as variaveis para armazenar os cadastros das cartas do usuario e logo após mostrar os atributos que o mesmo adicinou
   */
    char nome[50], nome2[20], codigo[6], codigo2 [6]; // Nome para o estado e codigo da cidade
    double populacao, populacao2, PIB, PIB2;  // população da cidade //PIB da cidade 
    float area, area2;  // area da cidade //PIB da cidade 
    int turistico, turistico2; // pontos turisticos da cidade
    char estado[5], estado2[5];

// Aprensetação do jogo.
printf("Bem-Vindo ao jogo Super Trunfo Paises.\n");
printf("Para iniciarmos o jogo, siga as instruções abaixo.\n");

// cadastrando a primeira carta
printf("Coloque algumas informações da Carta 1: Nome da cidade, população, área, PIB e número de pontos turísticos.\n"); 

printf("Insira o nome da primeira cidade: ");
scanf(" %[^\n]", nome);

printf("Insira a população: ");
scanf("%lf", &populacao);

printf("Insira a área: ");
scanf("%f", &area);

printf("Insira o PIB: ");
scanf("%lf", &PIB);

printf("Insira a quantidade de pontos turisticos: ");
scanf("%d", &turistico);

printf("Vamos representar o Estado com uma letra (A - H) e um código (01 - 04). \n"); 

printf("Insira a uma letra (A - H): ");
scanf("%s", estado);

printf("Insira o codigo (01 - 04): ");
scanf("%s", codigo);

// Cadastrando a carta  2

printf("Agora vamos cadastrar a Carta 2.\n");  

// Cadastrando a segunda carta
printf("Insira o nome da segunda cidade: "); 
scanf(" %[^\n]", nome2);

printf("Insira a população: ");
scanf("%lf", &populacao2);

printf("Insira a área: ");
scanf("%f", &area2);

printf("Insira o PIB: ");
scanf("%lf", &PIB2);

printf("Insira a quantidade de pontos turisticos: ");
scanf("%d", &turistico2);

printf("Insira o estado ( A - H ): ");
scanf("%s", estado2);

printf("Insira o codigo ( 01 - 04 ): ");
scanf("%s", codigo2);


// Depois de adicionar todas as informações, agora está na hora de apresentar!
printf("Pronto, agora vou está te mostrando os atributos das duas cartas.\n"); 

// Apresentação da carta 1
printf("\nCARTA 1: \n");

printf("\tEstado: %s\n", estado);
printf("\tCódigo: %s%s\n", estado, codigo);
printf("\tCidade: %s\n", nome);
printf("\tPopulação: %.0lf\n", populacao);
printf("\tÁrea: %.2f km²\n", area);
printf("\tPIB: %.2lf bilhões\n", PIB);
printf("\tPontos turisticos: %d\n", turistico);

// Apresentação da carta 2
printf("\nCARTA 2: \n");

printf("\tEstado: %s\n", estado2);
printf("\tCódigo: %s%s\n", estado2, codigo2);
printf("\tCidade: %s\n", nome2);
printf("\tPopulação: %.0lf\n", populacao2);
printf("\tÁrea: %.2f km²\n", area2);
printf("\tPIB: %.2lf bilhões\n", PIB2);
printf("\tPontos turisticos: %d\n", turistico2);


return 0;


}
