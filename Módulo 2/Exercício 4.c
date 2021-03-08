/*************************************************************************************************************************************
Curso:  Programador de Sistemas (IFB)
Disciplina: Módulo 3 - Linguagem C Intermediário
Exercício 4
Função: Um programa leia o nome do aluno e calcular a média (com uma função)
Autora: Ludmila da Silva
************************************************************************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <locale.h> 

float N1, N2, N3, N4, ME;
int resp;
char nome[40];

void nomeMedia(void);


int main(int argc, char *argv[])
{
	setlocale(LC_ALL,"Portuguese");
	
	do {
		
		nomeMedia();
		
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

void nomeMedia(void) {
	
	printf("Digite o seu nome: \n");
	scanf("%s",nome);
		
	printf("Digite a sua primeira nota: \n");
	scanf("%f", &N1);
		
	printf("Digite a sua segunda nota: \n");
	scanf("%f", &N2);
		
	printf("Digite a sua terceira nota: \n");
	scanf("%f", &N3);
		
	printf("Digite a sua quarta nota: \n");
	scanf("%f", &N4);
		
	ME = (N1 + N2 + N3 + N4)/4; 
	
	printf("O aluno %s obteve como nota final a média: %.2f \n", nome, ME);
}
