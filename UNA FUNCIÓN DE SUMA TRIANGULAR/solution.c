#include <stdio.h>

int main(){
	long int n,suma=0,i;
		
	scanf("%ld",&n);
	for(i=1;i<=n;i++) suma+=((i*(i+1))/2);
	n=suma;
	suma=0;
	for(i=1;i<=n;i++) suma+=((i*(i+1))/2);
	n=suma;
	suma=0;
	for(i=1;i<=n;i++) suma+=((i*(i+1))/2);
	
	printf("%ld",suma);
}
