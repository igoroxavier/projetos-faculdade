#include <stdio.h>
#include <ctype.h>

#define TAM 81

int conta_vogais(char* s) {
	int contador = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		char letra = tolower(s[i]);

		if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
			contador++;
		}
	}
	return contador;
}

int main(void) {
	char string[TAM];

	printf("Digite uma string: ");
	scanf(" %80[^\n]", string);

	int contarAsVogais = conta_vogais(string);
	printf("\"%s\" tem %d vogais.\n", string, contarAsVogais);

	return 0;
}
