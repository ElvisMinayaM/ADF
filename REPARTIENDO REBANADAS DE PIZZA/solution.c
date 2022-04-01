#include <stdio.h>

int main(){
	int N,A,H,M;
	scanf("%d%d%d%d",&N,&A,&H,&M);
	printf("%d",2+((N/2-1)%(A+H))+((N/2-1)%(A+M)));
}
