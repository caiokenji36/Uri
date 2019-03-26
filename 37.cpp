#include <stdio.h>

int main(){
	float numero;
	printf("digite o numero: ");
	scanf("%f",&numero);
	
	if(numero >25 && numero <=50){
			printf("Numero no intervalo de 25  a 50 ");
	}
	else if(numero >=0 && numero <= 25){
		printf("Numero no intervalo de 0 a 25");
		
	}
	else if(numero>50 && numero<=75){
		printf("Numero no intervalo de 50 a 75");
	}
	else if(numero>75 && numero<=100){
		printf("Numero no intervalo de 75 a 100");
	}
	else
		printf("Numero sem intervalo");
	
}
