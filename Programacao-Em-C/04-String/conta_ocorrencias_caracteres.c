#include <stdio.h>
#define N 81
int conta_ocorrencias(char *vetor, char c) {
	int contador = 0;
		
	for (int i = 0; vetor[i] != '\0'; i++) {
		if (vetor[i] == c) {
			contador += 1;
		}
	}
	return contador;
}

int main(void) {
	char string[81];
	char c;
	printf("Digite a string: ");
	scanf(" %80[^\n]", string);
	printf("Digite o caractere a ser procurado: ");
	scanf(" %c", &c);
	
	int qtd = conta_ocorrencias(string, c);

	printf("A quantidade de ocorrencias de %c em %s eh: %d", c, string, qtd);

	return 0;
}