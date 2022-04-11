#include <stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	float T[n];
	for(i=0;i<n;i++) scanf("%f",&T[i]);
	printf("%.2f ",T[0]);
	for(i=1;i<n-1;i++) printf("%.2f ",(T[i-1]+T[i]+T[i+1])/3);
	printf("%.2f ",T[n-1]);
}
