#include <stdio.h>

int main(){
	
	int a,b,c;
	int maior=0;
	printf("Digite um numero: ");
	scanf("%d",&a);
	printf("Digite o segundo numeor: ");
	scanf("%d",&b);
	printf("Digite o terceiro numero: ");
	scanf("%d",&c);
	
	if(a>b || a>c){
		if(b>c){
			maior =a;
		}
	}
	else if (b>c){
		maior =b;
	}
	else
		maior =c;
		
	
	
	printf("%d",maior);
		

		
	
}
