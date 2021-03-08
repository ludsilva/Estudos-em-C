/*************************************************************************************************************************************
Curso:  Programador de Sistemas (IFB)
Disciplina: Módulo 1 - Lógica de Programação
Exercício 1: Um programa que imprima nome, idade, sexo, salário e quantidade de salários recebidos do usuário
Autora: Ludmila da Silva
************************************************************************************************************************************/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <locale.h> 

int main (int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese"); 
	
	char nome[40], sexo[15];
	int idade;
	float salMin = 1045.00, salPessoa, qtdeSal;
	
	printf("Digite o seu nome: \n");
	scanf("%s", nome);
	
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);

	printf("Digite o seu sexo - Masculino / Feminino: \n");
	scanf("%s", sexo);
	  	
  	printf("Informe o seu salário: \n");
  	scanf("%f", &salPessoa);
  	
  	qtdeSal = (salPessoa / salMin);
  	
  	printf("\n %s, %d anos, do sexo %s, recebe %.2f reais, o equivalente a %.2f salários mínimos. \n",nome,idade,sexo,salPessoa,qtdeSal);

	system("pause");
	return 0;
}
