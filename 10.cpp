#include <stdio.h>
#define tam 2

struct pecas{
	int codigo;
	int numero;
	float preco;
};

int main(){
	struct pecas p1[tam];
	int i;
	float soma=0,total=0,soma2=0;
	for(i=0;i<tam;i++){
		printf("Digite o codigo da peca %d: ",i+1);
		scanf("%d",&p1[i].codigo);
		printf("Digite o numero de pecas %d: ",i+1);
		scanf("%d",&p1[i].numero);
		printf("Digite o preco %d: ",i+1);
		scanf("%f",&p1[i].preco);
		
	}
	soma = p1[0].numero * p1[0].preco;
	soma2= p1[1].numero * p1[1].preco;
	
	total = soma+ soma2;
	
	printf("O valor da compra = %.2f: ",total);
	
}
