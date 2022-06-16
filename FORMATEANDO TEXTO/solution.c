#include <stdio.h>

int main(){
	
	int i=0;
	char texto[200];
	scanf("%[^\n]",&texto);
	
	while((texto[i]<'A' && texto[i]>'Z') || (texto[i]<'a' && texto[i]>'z')) i++;	
	if(texto[i]>='a' && texto[i]<='z') texto[i]-=32;
	for(i+=1;texto[i]!='\0';i++) if(texto[i]>='A' && texto[i]<='Z') texto[i]+=32;
	printf("%s",texto);
}
