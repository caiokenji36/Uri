#include <stdio.h>
void imprime(int v[],int n,int i){
	if(i>=n)
		return;
	printf("%d ",v[i]);
	imprime(v,n,i+1);
}


int main(){
	int v[]={2,3,4,1};
	imprime(v,4,0);
	return 0;
}
