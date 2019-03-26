#include <stdio.h>


int main(){
	int total,dias,mes,ano,mod1;
	printf("Digite o tempo: ");
	scanf("%d",&total);
	
	ano = total /365;
	mod1 = total % 365;
	mes = mod1 / 30;
	dias = mod1 % 30;
	
	
	printf("%d =\n%d ano\n%d mes\n%d dias",total,ano,mes,dias);
	
}
