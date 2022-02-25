#include <stdio.h>

int main(){
	int i=0,j,N,G,r,c;
	char lienzo[30][30];
	
	scanf("%d %d",&N,&G);
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			lienzo[i][j]='.';
		}
	}
	
	i=0;
	while(i<G){
		scanf("%d %d",&r,&c);
		if(lienzo[r][c]=='.') lienzo[r][c]='-';
		else if(lienzo[r][c]=='-') lienzo[r][c]='+';
		else lienzo[r][c]='#';
		i+=1;
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%c ",lienzo[i][j]);
		}
		printf("\n");
	}
}
