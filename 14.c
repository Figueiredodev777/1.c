#include <stdio.h>

int a, b;
char c[5];

int main(){
	
	printf("Digite um valor para A:\n");
	scanf("%d", &a);
	
	printf("Digite um valor para B:\n");
	scanf("%d", &b);
	
	printf("Digite ate 5 caracteris:\n");
	scanf("%s", &c);
	
	printf("Valor de A: %d\n", a);
	printf("Valor de B: %d\n", b);
	printf("Os caracteris digitados foram: %s\n", c);
}
