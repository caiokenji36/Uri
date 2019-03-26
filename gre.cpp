#include <stdio.h>
#include <stdlib.h>

float SOMA(float n1, float n2);
float POSITIVO(float x);

int main(){
	float a,b,soma;
	printf("DIgite o primeiro numero:");
	scanf("%f",&a);
	printf("Digite o segundo numero: ");
	scanf("%f",&b);
	
	soma = SOMA(a,b);
	
	printf("%.1f",soma);
}


float SOMA(float n1,float n2){
	if(n1<0)
		n1=POSITIVO(n1);
	if(n2<0)
		n2=POSITIVO(n2);
	return n1+n2;
}

float POSITIVO(float x){
	return x*-1;
}
