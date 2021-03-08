/*************************************************************************************************************************************
Curso:  Programador de Sistemas (IFB)
Disciplina: Módulo 3 - Linguagem C Avançado
Exercício 1
Função: programa que receba o nome do usuário, idade e uma frase de texto predileta e armazene esses dados em um arquivo do tipo texto
Autora: Ludmila da Silva
************************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>


int main(int argc, char *argv[]) {	
	setlocale(LC_ALL,"Portuguese");
	
	FILE *arquivo_texto; 
	FILE *arquivo_binario;
	
	char nome[50];
	char frase[200];
	int idade;
	char Resp = 'S';
	
	arquivo_texto = fopen("dados.txt","a");
	
		if (arquivo_texto == NULL) {
			printf("Erro na abertura do arquivo");
			system("pause");
			exit (1);
		}
		else {
			while(Resp == 'S' || Resp == 's') {	 
				printf("\nDigite o seu nome: \n");
				scanf("%s", nome);
			
				printf("\nDigite a sua idade: \n");
				scanf("%d", &idade);
			
				fprintf(arquivo_texto,"%s, %d anos, frase favorita: ", nome, idade);
				
				printf("\nDigite a sua frase favorita | Não use acentos nem caracteres especiais: \n");
					fflush(stdin);
					fgets(frase, 200, stdin);
					fputs(frase, arquivo_texto);
					printf("\nDeseja continuar (S/N)? ");
					fflush(stdin);
					scanf("%c", &Resp);
					}
			fclose(arquivo_texto);	
			printf("\nDados gravados com sucesso! \n");
		}
		
	arquivo_binario = fopen("arquivo.bin","wb");
	
		if (arquivo_binario == NULL) {
				printf("Erro na abertura do arquivo");
				system("pause");
				exit (1);
			} 
		else {
		fwrite(nome, sizeof(char), 1, arquivo_binario);	
		fwrite(&idade, sizeof(int), 1, arquivo_binario);	
		fwrite(frase, sizeof(char), 1, arquivo_binario);	
		fclose(arquivo_binario);
		}
		
	system("pause");
	return 0;
}


