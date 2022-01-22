#include <stdio.h>

int main(){
	int n,i,j,total=0,D1=0,D2=0,suma=0,esMagico=1;
	scanf("%d",&n);
	int M[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&M[i][j]);
			if(i==0) total+=M[i][j];
		}
	}
	//evaluo filas
	for(i=0;i<n;i++){
		suma=0;
		for(j=0;j<n;j++) suma+=M[i][j];
		if(suma!=total){
			printf("0");
			return 0;
		}	
	}
	//evaluo columnas
	for(i=0;i<n;i++){
		suma=0;
		for(j=0;j<n;j++) suma+=M[j][i];
		if(suma!=total){
			printf("0");
			return 0;
		}	
	}
	//evaluo diagonales
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j) D1+=M[i][j];
			if(j==n-i-1) D2+=M[i][j];
		}
	}
	if(D1!=total || D2!=total) printf("0");
	else printf("1");
}
