#include <stdio.h>

int main(){
	int n,c,cap,total=0,dias=0;
	scanf("%d%d",&n,&c);
	
	while(n--){
		scanf("%d",&cap);
		if(total+cap>=c){
			dias+=1;
			break;
		}
		else{
			total+=cap;
			dias+=1;	
		}
	}
	printf("%d",dias);
}
