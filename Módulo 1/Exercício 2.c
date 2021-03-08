/*************************************************************************************************************************************
Curso:  Programador de Sistemas (IFB)
Disciplina: Módulo 1 - Lógica de Programação
Exercício 2: Imprimir se a pessoa é adulta masculina ou menor de idade feminina.
Autora: Ludmila da Silva
************************************************************************************************************************************/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <locale.h> 

int main (int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese"); 
	
	char nome[40];
	int idadeHom, idadeMul, sexo;
	
	printf("Digite o seu nome: \n");
	scanf("%s", nome);
	printf("Infome o seu sexo: \n1 - Masculino  \n2 - Feminino \n");
	scanf("%d", &sexo);
	
	printf("Digite a sua idade: \n");
		if (sexo == 1) {
			scanf("%d", &idadeHom);
		} else 
			if (sexo == 2) {
				scanf("%d", &idadeMul);
			}
	
	if (idadeHom >= 18){
		printf("%s é um adulto do sexo masculino. \n", nome);
	} else
	if (idadeMul <18) {
		printf("%s é uma mulher menor de idade. \n", nome);
	} else {
		printf("\nPrograma encerrado.\n");
	}
	
	system("pause");
	return 0;
	
}
