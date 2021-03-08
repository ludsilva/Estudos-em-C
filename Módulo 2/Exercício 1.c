/*************************************************************************************************************************************
Curso:  Programador de Sistemas (IFB)
Disciplina: Módulo 3 - Linguagem C Intermediário
Exercício 1
Função: Um programa que recebe 4 números e mostrar a soma, subtração, multiplicação e média dos números
Autora: Ludmila da Silva
************************************************************************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <locale.h> 


// Função main
int main()
{
	setlocale(LC_ALL,"Portuguese");
		
	float N1, N2, N3, N4, SOMA, MULT, SUB, ME;
	int resp;
	
	do {
		printf("Digite o primeiro número: \n");
		scanf("%f", &N1);
		
		printf("Digite o segundo número: \n");
		scanf("%f", &N2);
		
		printf("Digite o terceiro número: \n");
		scanf("%f", &N3);
		
		printf("Digite o quarto número: \n");
		scanf("%f", &N4);
		
		SOMA = (N1 + N2 + N3 + N4);
		
		SUB = (N1 - N2 - N3 - N4);
		
		MULT = (N1 * N2 * N3 * N4);
		
		ME = (N1 + N2 + N3 + N4)/4;
		
		printf("\nA soma dos números é: %.2f \n", SOMA);
		printf("\nA subtração dos números é: %.2f \n", SUB);
		printf("\nA multiplicação dos números é: %.2f \n", MULT);
		printf("\nA média dos números é: %.2f \n", ME);
		
		
		printf("\nDeseja continuar? - 1 - Sim | 2 - Não \n");
		scanf("%d", &resp); 
		
			while ((resp != 1) && (resp != 2)) {
				printf("\nErro! Tente novamente! \n");
				printf("\nDeseja continuar? - 1 - Sim | 2 - Não \n");
				scanf("%d", &resp);
			}
	} while (resp == 1); 

	system("pause");
	return 0;	
	
}
