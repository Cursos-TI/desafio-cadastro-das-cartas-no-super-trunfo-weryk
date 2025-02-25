#include <stdio.h>
#include <stdlib.h>

int main (){
	int populacao, populacao2, num_pont_turisticos, num_pont_turisticos2; 					//%d
	char estado[20], estado2[20], cod_carta[10], cod_carta2[10], nome_cidade[20], nome_cidade2[20]; // %s	
	float area, area2, PIB, PIB2;  															// %2.f

	printf("Insira os dados da PRIMEIRA carta\n\n");
	printf("Digite Uma letra de 'A' a 'H': \n");
	scanf("%s", &estado);

	printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03): \n");
	scanf("%s", &cod_carta);

	printf("Digite o nome da Cidade: \n");
	scanf("%s", &nome_cidade);

	printf("Digite a populacao da cidade: \n");
	scanf("%d", &populacao);

	printf("Digite a area da cidade em quilometros quadrados: \n");
	scanf("%f", &area);

	printf("Digite o Produto Interno Bruto da cidade: \n");
	scanf("%f", &PIB);

	printf("Digite a quantidade de pontos turisticos na cidade: \n");
	scanf("%d", &num_pont_turisticos);

	printf("\n \n************************************* \n");
	printf("CARTA 1:\n");
	printf("Estado: %s \n",estado);
	printf("Codigo: %s \n", cod_carta);
	printf("Nome da Cidade: %s \n", nome_cidade);
	printf("Populacao: %d \n", populacao);
	printf("Area: %f \n", area);
	printf("PIB: %f \n", PIB);
	printf("Numero de Pontos Turisticos: %d \n", num_pont_turisticos);
	printf("*************************************\n");

	//

	printf("\n \nInsira os dados da SEGUNDA carta\n\n");
	printf("Digite Uma letra de 'A' a 'H': \n");
	scanf("%s", &estado2);

	printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03): \n");
	scanf("%s", &cod_carta2);

	printf("Digite o nome da Cidade: \n");
	scanf("%s", &nome_cidade2);

	printf("Digite a populacao da cidade: \n");
	scanf("%d", &populacao2);

	printf("Digite a area da cidade em quilometros quadrados: \n");
	scanf("%f", &area2);

	printf("Digite o Produto Interno Bruto da cidade: \n");
	scanf("%f", &PIB2);

	printf("Digite a quantidade de pontos turisticos na cidade: \n");
	scanf("%d", &num_pont_turisticos2);

	printf("\n \n*************************************n");
	printf(" CARTA 2:\n");
	printf("Estado: %s \n",estado2);
	printf("Codigo: %s \n", cod_carta2);
	printf("Nome da Cidade: %s \n", nome_cidade2);
	printf("Populacao: %d \n", populacao2);
	printf("Area: %f \n", area2);
	printf("PIB: %f \n", PIB2);
	printf("Numero de Pontos Turisticos: %d \n", num_pont_turisticos2);
	printf("*************************************\n");



	system("pause");

}