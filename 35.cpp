#include <stdio.h>

void verdadeiro(int a, int b, int c, int d);

int main(){
	int a,b,c,d;
	printf("Digite a: ");
	scanf("%d",&a);
	printf("digite b: ");
	scanf("%d",&b);
	printf("Digite c: ");
	scanf("%d",&c);
	printf("Digite d: ");
	scanf("%d",&d);
	verdadeiro(a,b,c,d);
}
/*Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que 
A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, 
forem positivos e se a vari�vel A for par escrever a mensagem "Valores aceitos", sen�o escrever "Valores nao aceitos".*/

void verdadeiro(int a, int b, int c, int d){
	if(b>c && d>a && (c+d)> (a+b) && c>=0 && d>=0 && a%2==0)
		printf("Valores aceito");
	else
		printf("Valores nao ceitos:");
		
	return;
}
