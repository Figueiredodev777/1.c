#include <stdio.h>

int escolha;
int main(){
	
	
	printf("Escolha uma opcao do cardapio:\n");
	printf("1-Macarrao\n");

	printf("2-Carne com Batata\n");

	printf("3-Risotto de Camarao\n");
	
	printf("4-Risotto de file mignon\n");
	
	printf("5-tilapia com fritas\n");
	
	scanf("%d", &escolha);
	
	if( escolha == 1){
		printf("prato escolhido: Macarrao\n");
	}
	if( escolha == 2){
		printf("prato escolhido: Carne com Batata \n");
	}
	if( escolha == 3){
		printf("prato escolhido: Risotto de Camarao\n");
	}
	if( escolha == 4){
		printf("prato escolhido: Risotto de file mignon\n");
	}
	if( escolha == 5){
		printf("prato escolhido: tilapia com fritas\n");
	}
}
