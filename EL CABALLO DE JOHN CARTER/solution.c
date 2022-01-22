#include <stdio.h>

int main(){
	int i=0,P,S,B,total=0;
	char C[1000];
	scanf("%d%d%d%s",&P,&S,&B,&C);
	
	while(C[i]!='\0'){
		if(C[i]=='-') total+=P;
		else if(C[i]=='/') total+=S;
		else total+=B;
		i++;
	}
	printf("%d",total);
}
