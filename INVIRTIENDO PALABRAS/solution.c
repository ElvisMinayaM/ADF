#include <stdio.h>

int main(){
	int i,j,inicio=0,fin,p;
	char aux,C[1000]="hola,saludos,como,estan";
	scanf("%s",&C);
	for(i=0;C[i]!='\0';i++){
		if(C[i]==',' || C[i+1]=='\0'){
			fin=i-1;
			p=inicio;
			if(C[i+1]=='\0') fin=i;
			for(j=fin;p<=j;j--,p++){
				aux=C[j];
				C[j]=C[p];
				C[p]=aux;
			}
			inicio=i+1;	
		}
	}
	printf("%s",C);
}
