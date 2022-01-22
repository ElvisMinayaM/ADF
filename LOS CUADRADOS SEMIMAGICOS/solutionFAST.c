#include <stdio.h>

int main(){
	int n,i,j,numero,total=0,D1=0,D2=0,suma,esMagico=1;
	scanf("%d",&n);
	int C[n];
	for(i=0;i<n;i++) C[i]=0;
	//pedimos datos y evaluamos filas y columnas
	for(i=0;i<n;i++){
		suma=0;
		for(j=0;j<n;j++){
			scanf("%d",&numero);
			if(i==0) total+=numero;
			else suma+=numero;	
			if(i==j) D1+=numero;
			if(j==n-i-1) D2+=numero;
			C[j]+=numero;
			if(C[j]>total) esMagico=0;
		}
		if(i!=0 && suma!=total) esMagico=0;
	}
	if(total!=D1 || total!=D2 || esMagico==0) printf("0");
	else printf("1");	
}
