#include <stdio.h>

void retornaMaiorMenor(int *ptr_a,  int *ptr_b) {
	int temp;
	if( *ptr_b > * ptr_a){
		temp = *ptr_a;
		*ptr_a = *ptr_b;
		*ptr_b = temp;
	}
}

int main(void) {

	int a, b;
	printf("Entre com dois valores inteiros: ");
	scanf("%d %d", &a, &b);
	printf("ANTES: \n");
	printf("valor de a = %d \n", a);
	printf("valor de b = %d \n", b);
	printf("DEPOIS:\n");
	retornaMaiorMenor(&a, &b);
	printf("valor de a = %d \n", a);
	printf("valor de b = %d \n", b);
	return 0;
}