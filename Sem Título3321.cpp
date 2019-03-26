#include <stdio.h>
#define tam 10

int main(){
	int v[tam],i;
	for(i=0;i<tam;i++){
		printf("Digite os numeros: ");
		scanf("%d",&v[i]);
		
	}
	for(i=0;i<tam;i++){
		if(v[i]%2==0)
			printf("%d e par\n",v[i]);
		else
			printf("%d e impar\n",v[i]);
	}
}
