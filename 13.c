#include <stdio.h>

int idade, subtra, ano = 2025;
int meses;

int main(){
	
	printf("Digite deu ano de nascimento:\n");
	scanf("%d", &idade);
	
	subtra = ano - idade ; 
	meses = subtra * 12 ;
	
	printf("Sua idade me meses e igual a: %d \n", meses);
	
}
