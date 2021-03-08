/*************************************************************************************************************************************
Curso:  Programador de Sistemas (IFB)
Disciplina: Módulo 1 - Lógica de Programação
Exercício 3: Um programa que imprima a quantidade de mulheres menores de idade, total de menores de idade e 
quantidade de homens e mulheres adultos. Ter uma condição de parada para o usuário escolher continuar ou não.
Autora: Ludmila da Silva
************************************************************************************************************************************/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <locale.h> 

int main (int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese"); 
	
	char nome[40];
	int idade, homAdul =0, homMenor =0, mulAdul =0, mulMenor =0, qtdeMenor =0;
	int resp, sexo;
	
	do{
		printf("Digite o seu nome: \n");
     	scanf("%s", nome);
     	printf("Informe o seu sexo: \n1 - Masculino  \n2 - Feminino \n");
     	scanf("%d", &sexo);
    
     	printf("Digite a sua idade: \n");
     	scanf ("%d", &idade);
     		if ((sexo == 1) && (idade >= 18)) {
     			homAdul++;
			 } else
			 		if ((sexo == 1) && (idade < 18)) {
			 			homMenor++;
					 }
            
			if ((sexo == 2) && (idade >= 18)) {
     			mulAdul++;
			 } else
			 		if ((sexo == 2) && (idade < 18)) {
			 			mulMenor++;

					 }          

	qtdeMenor = mulMenor + homMenor;

	printf("\nA quantidade total de mulheres menores de idade é: %d. \n",mulMenor);
	printf("A quantidade total de mulheres maiores de idade é: %d. \n", mulAdul);
 	printf("A quantidade total de homens adultos é: %d.\n", homAdul);
	printf("A quantidade total de homens menores é: %d. \n", homMenor);
	printf("A quantidade total de menores de idade é %d. \n", qtdeMenor);
	printf("\n");

	printf("\nDeseja continuar? Digite: \n1 - Sim \n2 - Não\n");
	scanf("%d", &resp);
		
	} while (resp != 2);
	
	system("pause");
	return 0;	
}
