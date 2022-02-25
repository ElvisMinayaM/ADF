#include <stdio.h>
#include <string.h>

int main(){
	int i,j,N,suma=0;
	
	char numero[200],num[10]; //max N <= 100, diferente tamaño numero resize
	
	printf("Digite valor de N: ");
	scanf("%d",&N);
	
	//mostramos y concatenamos
	printf("\n");
	for(i=1;i<=N;i++){
		numero[0]='\0';
		for(j=1;j<=i;j++){
			sprintf(num,"%d",j);
			strcat(numero,num);
		}
		printf("%s\n",numero);
	}
	//en la cadena N evaluamos si es multiplo de 3 con la "ayuda"
	for(i=0;i<strlen(numero);i++) suma+=(numero[i]-'0');
	
	if(suma%3==0) printf("\n\nEL NUMERO CONCATENADO ES MULTIPLO DE 3\n");
	else printf("\n\nEL NUMERO CONCATENADO NO ES MULTIPLO DE 3\n");
	
	return 0;
}
