#include <stdio.h>

char c[50];

int main(){
	
	printf("Digite qualquer coisa com ate 50 caracteris:\n");
	scanf("%s", &c);
	
	printf("o texto digitado foi: %s \n", c);
}
