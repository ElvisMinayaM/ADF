#include <stdio.h>

int s(int n){
	int i,suma=0;
	for(i=1;i<n;i++) if(n%i==0) suma+=i;
	return suma;
}

void evaluar(int n,int m){
	if(s(m)==n && s(n)==m) printf("0 ");
	else if(s(m)<=n && s(n)<=m) printf("1 ");
	else if(s(m)>=n && s(n)>=m) printf("2 ");
	else printf("3 ");
}

int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	evaluar(x,y);
	evaluar(x,x);
	evaluar(y,y);
}
