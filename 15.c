#include <stdio.h>


	
	int a, b, c;
	int soma;
	float resultado;
	
	int main(){
		
		printf("Valor para A:\n");
		scanf("%d", &a);
		
		printf("Valor para B:\n");
		scanf("%d", &b);
		
		printf("Valor para C:\n");
		scanf("%d", &c);
		
	soma = a + b + c;
	resultado = soma / (3);
	
	printf("Media dos Valores e: %2.f\n", resultado);	
		
}

