#include <stdio.h>
//pesos 2, 3, 4 e 1
int main(){
	float n1,n2,n3,n4,media=0,exame=0;
	printf("Coloque a primeira nota: ");
	scanf("%f",&n1);
	printf("Coloque a segunda nota: ");
	scanf("%f",&n2);
	printf("Coloque a terceira nota: ");
	scanf("%f",&n3);
	printf("Coloque a quarta nota: ");
	scanf("%f",&n4);
	
	n1=n1 *2;
	n2 = n2*3;
	n3=n3*4;
	n4=n4*1;
	
	media= (n1+n2+n3+n4)/(10);
	
	if(media>=7)
		printf("Media = %.1f\nAluno aprovado ",media);
	if(media>=5 && media<=6.9){
		printf("\nAluno em exame: com media %.1f",media);
		printf("\nColoque a nota do exame: ");
		scanf("%f",&exame);
		exame=(exame+media)/2;
		
		if(exame>=5)
			printf("Aluno aprovado %1.f",exame);
		else
			printf("Aluno reprovado %1.f",exame);
	}
	
	if(media<5)
		printf("Aluno reprovado %1.f",media);
	
	
	
}
