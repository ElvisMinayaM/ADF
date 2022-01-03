#include <iostream>
using namespace std;

int contarBichos(int A,int B,int C,int D){
	if(D<=0) return A+B+C;
	else{
		int AA=0,BB=0,CC=0;
		if(B==0 && C==0){
			A+=1;
			B+=3;
			C+=1;
		}
		else{
			AA+=(1+1);
			BB=BB+3+(BB*2);
			CC=CC+(1+4)+(CC*2);
		}
		contarBichos(A+AA,B+BB,C+CC,D-1);
	}
}

int main(){
	int N,D;
	cin>>N>>D;
	cout<<contarBichos(N,0,0,D);
}


