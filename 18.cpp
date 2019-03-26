/*Leia um valor inteiro. 
A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. 
A seguir mostre o valor lido e a relação de notas necessárias.*/

#include <stdio.h>

int main(){
	int notas,complemento=0,cinco=0,um=0,dois=0,deis=0,vinte=0,cinquenta=0,cem=0;
	printf("Digite o seu dinheiro: ");
	scanf("%d",&notas);
	cem = notas / 100;
	complemento = notas % 100;
	cinquenta = complemento / 50;
	complemento = complemento % 50;
	vinte = complemento /20;
	complemento = complemento % 20;
	deis = complemento / 10;
	complemento = complemento % 10;
	cinco = complemento /5;
	complemento = complemento % 5;
	dois = complemento /2;
	complemento = complemento % 2;
	um = complemento /1;
	
	printf("Com %d vc tera \n%d notas de cem\n%d notas de cinquenta\n%d notas de vinte\n%d notas de deis\n%d notas de cinco\n%d notas de dois\n%d notas de um",notas,cem,cinquenta,vinte,deis,cinco,dois,um);
	
}
