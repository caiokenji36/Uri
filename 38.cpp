#include <stdio.h>

int main(){
	int codigo,quantidade;
	float preco;
	float total;
	float cachorro=4,salada=4.50,bacon=5,torrada=2,refrigerante=1.50;
	
	printf("Digite 1-Cachorro\n2-X-Salada\n3-X-Bacon\n4-Torrada\n5-Refrigerante:\n");
	scanf("%d",&codigo);
	printf("Digite a quantidade:\n");
	scanf("%d",&quantidade);
	
	if(codigo ==1){
		total= cachorro * quantidade;
		printf("Total = R$ %.2f",total);
	}
		if(codigo ==2){
		total= salada * quantidade;
		printf("Total = R$ %.2f",total);
	}
		if(codigo ==3){
		total= bacon * quantidade;
		printf("Total = R$ %.2f",total);
	}
		if(codigo ==4){
		total= torrada * quantidade;
		printf("Total = R$ %.2f",total);
	}
		if(codigo ==5){
		total= refrigerante * quantidade;
		printf("Total = R$ %.2f",total);
	}
}
