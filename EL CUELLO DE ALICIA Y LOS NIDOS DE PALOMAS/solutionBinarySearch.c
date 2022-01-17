#include <stdio.h>

int binarySearch(int arr[],int l,int r,int x,int visitados[]){
    int m;
	while(l<=r){
        m=l+(r-l)/2;
        if(arr[m]==x && visitados[m]==0){
        	visitados[m]=-1;
			return 1;
		}
        if(arr[m]<x) l=m+1;
        else r=m-1;
    }
    return -1;
}

int main(){
 	int n,m,i,cantidad=0,altura=1,nuevaAltura;
	
	scanf("%d",&n);
	int nidos[n],visitados[n];
 	for(i=0;i<n;i++){
 		scanf("%d",&nidos[i]);
 		visitados[i]=0;
	}

	scanf("%d",&m);
	for(i=0;i<m;i++){
	    scanf("%d",&nuevaAltura);
		altura+=nuevaAltura;
		if(binarySearch(nidos,0,n-1,altura,visitados)==1) cantidad+=1;
	}
	printf("%d",cantidad);
}
