#include <stdio.h>
#include <stdlib.h>


struct aluno{
	char nome[50];
};

int main(){
	struct aluno alu[2];
	int i;
	for(i=0;i<2;i++){
		printf("Digite o nome do aluno: ");
		fflush(stdin);
		gets(alu[i].nome);
	}
	 printf("Nome do aluno %s",alu[0].nome);
	
}



