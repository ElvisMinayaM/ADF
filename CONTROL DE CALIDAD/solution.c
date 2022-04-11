#include <stdio.h>

int main(){
	int n,num,mayor=0,menor=1001,total=0,esCorrecto=1,anterior=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&num);
		if(anterior<num) anterior=num;
		else esCorrecto=0;
		if(mayor<num) mayor=num;
		if(menor>num) menor=num;
		total+=num;
	}
	if(esCorrecto==1) printf("Correcto: %d pesos",total);
	else printf("Incorrecto: %d %d",menor,mayor);
}
