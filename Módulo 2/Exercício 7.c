/*************************************************************************************************************************************
Curso:  Programador de Sistemas (IFB)
Disciplina: Módulo 3 - Linguagem C Avançado
Exercício 7
Função: Um programa com uma matriz que calcula a média de 5 notas informadas pelo usuário
Autora: Ludmila da Silva
************************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float notas[5] = {0}, m=0;
	int i;

	printf("\n********** Entrada de dados ********\n");	

	for (i=0; i<5; i++) {
		printf("\n Digite a sua %dª nota \n",i+1);
		scanf("%f",&notas[i]);
		
		m = m + notas[i];	
	}
	
	m = m / 5;
	
	system("pause");
	system("cls");
	
	printf("\n********** Saída de dados ********\n");
	printf("\nA sua média é: %.2f \n", m);
	
	system("pause");
	return 0;
}
