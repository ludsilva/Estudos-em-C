/*************************************************************************************************************************************
Curso:  Programador de Sistemas (IFB)
Disciplina: Módulo 3 - Linguagem C Avançado
Exercício 2
Função: programa que receba o nome do arquivo txt a ser aberto e mostre o seu conteúdo
Autora: Ludmila da Silva
************************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>


int main (int argc, char *argv[]) {	
	setlocale(LC_ALL,"Portuguese");
	
	FILE *arquivo_texto; 
	
	char fnome[50];
	int i;
	
	printf("Entre um nome de arquivo: ");
	scanf("%s", fnome);
	
	arquivo_texto = fopen("dados.txt","r");
	
	if (arquivo_texto == NULL){
		printf("Erro ao abrir %s\n", fnome);
		exit (1);
		}
		
	else {
	printf("\nArquivo aberto com sucesso! \n\n");
	printf("__________________________________\n\n"); 
	printf("* Conteúdo do arquivo '%s' *\n", fnome);
	printf("\n__________________________________\n\n"); 

		while( (i=fgetc(arquivo_texto)) != EOF )
			printf("%c", i);
			printf("\n");
		fclose(arquivo_texto);
	}
	
	system("pause");
	return 0;
}
