#include <stdio.h>

int main(){
	int i,j,a=1,f,c;
	scanf("%d%d",&f,&c);
	for(i=0;i<f;i++){	
		for(j=0;j<c;j++){
			printf("%d ",a);
			if(i%2==0) a++;
			else a--;
		}
		if(i%2==0) a=(a-1)+c;
		else a=(a+1)+c;
		printf("\n");
	}
}
