#include <stdio.h>

int main(){
	float r=0,pi1=3.14159;
	float volume=0;
	
	printf("Digite o valor do raio: ");
	scanf("%f",&r);
	
	volume =(4/3.0) *(pi1 *r*r*r);
	
	printf("Volume = %.3f",volume); 
	
	
}
