#include <stdio.h>


int main(){
	int km;
	float gasto;
	float total=0;
	
	printf("Digite os km do seu carro: ");
	scanf("%d",&km);
	printf("Digite a gasolina gasta: ");
	scanf("%f",&gasto);
	
	total = km / gasto;
	
	printf("A media e = %.3f",total);
	
	
}
