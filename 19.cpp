#include <stdio.h>

int main(){
	int tempo,seg,horas,min,mod1;
	
	printf("Digite o tempo: ");
	scanf("%d",&tempo);
	
	horas = tempo /3600;
	mod1 = tempo % 3600;
	min = mod1 /60;
	seg = mod1 % 60;
	
	printf("%d = %d : %d : %d",tempo,horas,min,seg);
	
	
	
}
