#include <stdio.h>

int main(){
 	int n,m,i,j,cantidad=0,altura=1,nuevaAltura;
 	
	scanf("%d",&n);
	int nidos[n];
 	for(i=0;i<n;i++) scanf("%d",&nidos[i]);
	     
	scanf("%d",&m);
	for(i=0;i<m;i++){
	    scanf("%d",&nuevaAltura);
		altura=altura+nuevaAltura;
		for(j=0;j<n;j++){
		 	if(altura==nidos[j]){
		     	nidos[j]=-123;
		      	cantidad=cantidad+1;
		    }  
       	}
	}
	printf("%d",cantidad);
}
 

