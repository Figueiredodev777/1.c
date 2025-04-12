#include <stdio.h>

  float a, b, c, d;
  float soma_1, soma_2;
  float resultado;
  
  int main(){
  	
  	printf("Valor para A:\n");
  	scanf("%f", &a);
  	
  	printf("Valor para B:\n");
  	scanf("%f", &b);
  	
	printf("Valor para C:\n");
  	scanf("%f", &c);
  	
  	printf("Valor para D:\n");
  	scanf("%f", &d);
  	
  	soma_1 = a + b;
  	
  	soma_2 = c + d;
  	
  	resultado = soma_1 / soma_2;
  	
  	printf("Valor do resultado: %f resultado\n", resultado);
  	
  	
  }
