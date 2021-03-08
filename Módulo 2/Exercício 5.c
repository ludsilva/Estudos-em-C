/*************************************************************************************************************************************
Curso:  Programador de Sistemas (IFB)
Disciplina: Módulo 3 - Linguagem C Intermediário
Exercício 5
Função: Um programa com um vetor que receba oito notas e nomes dos alunos e exiba em tela as notas e os respectivos nomes
Autora: Ludmila da Silva
************************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <string.h>

int main(int argc, char *argv[]) {	
	setlocale(LC_ALL,"Portuguese");
	
	float notas[8][8];
	char nomes[8][30];
	int i, j;
	
	printf("\n********** Entrada de dados ********\n");	
	
	for (i=0; i<8; i++) {
		printf("\n Digite o nome do %dº aluno: \n",i+1);
		scanf("%s",nomes[i]);
		
		for ( j=0; j<8; j++) {
			printf("\n Digite a nota %d: \n",j+1);
			scanf ("%f",&notas[i][j]);
		}
	}
	
	printf("\n********** Saída de dados ********\n");
	
	for (i=0; i<8; i++) {
		printf("\n");
		printf("\n %d- Nome do Aluno: %s \n", i+1, nomes[i]);
		
			for ( j=0; j<8; j++) {
				printf("\n Nota: %.2f",notas[i][j]);
		}
	}

	system("pause");
	return 0;
}
