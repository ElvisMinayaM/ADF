#include <stdio.h>
int main(){
	
	int c,n,i;
	int A[1000];
	float promedio,cantidad;
	scanf("%d",&c);

	while(c--){
		promedio=0;
		cantidad=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&A[i]);
			promedio+=A[i];
		}
		promedio/=n;
		for(i=0;i<n;i++) if(A[i]>promedio) cantidad++;
		printf("%.3f%c\n",(cantidad*100)/n,37);
	}
}
