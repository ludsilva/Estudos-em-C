/*************************************************************************************************************************************
Curso:  Programador de Sistemas (IFB)
Disciplina: Módulo 3 - Linguagem C Intermediário
Exercício 3
Função: Um programa que calcule a Média de Aproveitamento de um aluno
Autora: Ludmila da Silva
************************************************************************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <locale.h> 


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float N1, N2, N3, MA;
	int resp;
	char nome[40];
	
	do {
		printf("Digite o seu nome: \n");
		scanf("%s",nome);
		
		printf("Digite a sua primeira nota: \n");
		scanf("%f", &N1);
		
		printf("Digite a sua segunda nota: \n");
		scanf("%f", &N2);
		
		printf("Digite a sua terceira nota: \n");
		scanf("%f", &N3);
		
		MA = (N1*1 + N2*2 + N3*3)/6; 
		
		printf("\n%s, a sua média de aproveitamento é: %.2f \n", nome, MA);
		
		if (MA >= 9) {
				printf("\nConceito A. \n");
		}
		else {
			if ((MA >= 7.5) && (MA < 9)) {
				printf("\nConceito B. \n");
			}
			else {
				if ((MA >= 6) && (MA < 7.5)){
					printf("\nConceito C. \n");
				}
				else {
					if ((MA >= 4) && (MA < 6)) {
						printf("\nConceito D. \n");	
					}
					else {
						if (MA < 4) {
							printf("\nConceito E. \n");
						}
					}
				}
			}
		}
		
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
