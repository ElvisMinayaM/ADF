#include <stdio.h>

int main(){
	int n,i,num,nom;
	
	scanf("%d",&n);
	
	int N[10000],c=0,in=0,vendidos=0;
	for(i=0;i<n;i++){
		scanf("%d",&num);
		if(num==1){
			scanf("%d",&nom);
			N[c]=nom;
			c++;
		}
		if(num==2 && c-in>0){
			vendidos+=N[in];
			in++;
		}
		if(num==3) printf("%d\n",c-in);
		if(num==4) printf("%d\n",vendidos);
	}
}
