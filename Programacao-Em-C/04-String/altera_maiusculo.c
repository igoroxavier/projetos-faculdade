#include <stdio.h>
#define TAM 81
/*Exercício para alterar os caracteres maiusculos de uma string para minusculo*/

void minusculo(char* s) {
	for (int i = 0; s[i] != '\0'; i++)	{
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = s[i] + 32; /*Converte pra minusculo manipulando pelo codigo da tabela ASCII*/
		}
	}
}	


int main(void) {
	char string[TAM];
	printf("Digite a string: ");
	scanf(" %80[^\n]", string);

	minusculo(string);
	
	printf("String modificada: %s", string);

	return 0;
}
