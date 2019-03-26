#include <stdio.h>
#include <stdlib.h>


void exibevetor(int v[],int n,int i){//n numero de elementos e i posicao do elemento
	if(i>=n)
		return;
	printf("%d ",v[i]);
	exibevetor(v,n,i+1);
}


int main(){
	int v[]={2,3,5,3};
	exibevetor(v,4,0);
	
	return 0;
}
