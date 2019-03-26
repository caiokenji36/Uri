#include <stdio.h>

int main(){
	float km;
	float tempo;
	
	printf("Coloque os km: ");
	scanf("%f",&km);
	
	tempo = (km /30) *60;
	
	printf("Ele demoraria %.2f minutos para fazer os %.2fKM ",tempo,km);
	
	
}
