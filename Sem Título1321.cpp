#include <stdio.h>
#define tam 5

int main(){
	
	float v[tam],media=0;
	int i=0;
	
	while(i<tam){
		printf("Digite as notas dos alunos: ");
		scanf("%f",&v[i]);
		media = media + v[i];
		i++;
	}
	media = media / tam;
	
	printf("Media da sala = %.2f\n",media);
	return 0;
	
	
}
