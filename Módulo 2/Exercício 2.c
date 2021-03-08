/*************************************************************************************************************************************
Curso:  Programador de Sistemas (IFB)
Disciplina: Módulo 3 - Linguagem C Intermediário
Exercício 2
Função: Um programa que recebe e mostra o nome, o salário de um funcionário, sua comissão (5, 10 ou 20%) e abono salarial
Autora: Ludmila da Silva
************************************************************************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <locale.h> 

int main()
{
	float salantigo, salcomissao, sal_abono, salfinal;
	int comissao;
	int resp;
	char nome[40];
	
	setlocale(LC_ALL,"Portuguese");
	
	do {
		printf("\nDigite o seu nome: \n");
		scanf("%s",nome);
		
		printf("\nDigite o valor (em reais) do seu salário: \n");
		scanf("%f", &salantigo);
				
		printf("\nDigite o valor da sua comissão: 5, 10 ou 20%: \n");
		scanf("%d", &comissao);
		
			while ((comissao != 5) && (comissao != 10) && (comissao != 20)) {
				printf("\nErro! Tente novamente! \n");
				printf("\nDigite o valor da sua comissão: 5, 10 ou 20 % \n");
				scanf("%d", &comissao);
			}
			
		
		switch (comissao) {
			case 5:
				salcomissao = salantigo+((salantigo*5)/100);
				break;
			
			case 10:
				salcomissao = salantigo+((salantigo*10)/100);
				break;
				
			case 20:
				salcomissao = salantigo+((salantigo*20)/100);
				break;
		}
		
		
		if (salantigo <= 2000) {
				sal_abono = salantigo + 1800;
					salfinal = salcomissao + 1800;
		}
		else {
			if ((salantigo >= 2000) && (salantigo <= 5000)) {
				sal_abono = salantigo + 3500;
					salfinal = salcomissao + 3500;
			}
			else {
				if (salantigo > 5000) {
					sal_abono = salantigo + 4800;
						salfinal = salcomissao + 4800;
				}
			}
		}
				
		printf("\n %s esse é o valor do seu salário antigo: R$ %.2f \n", nome,salantigo);
		printf("\n Esse é o valor, em porcentagem, da sua comissão: %d \n", comissao);
		printf("\n Esse é o valor do seu salário com a comissão: R$ %.2f \n", salcomissao);
		printf("\n Esse é o valor do seu salário com abono: R$ %.2f \n", sal_abono);
		printf("\n Valor total do seu salário: R$ %.2f \n", salfinal); 
		
		
		printf("\n \n");
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
