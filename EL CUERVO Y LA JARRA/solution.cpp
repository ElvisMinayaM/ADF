#include <iostream>
using namespace std;
int binarySearch(int *arr,int &l,int r,int &x,int resta){
	int m;
	while(l<=r){ 
		m=l+(r-l)/2;
 		if(arr[m]-resta>=x && arr[m-1]-resta<x) return m;
		if(arr[m]-resta<x) l=m+1;
        else r=m-1;
    } return -1;
}
int main(){
	int i,r,n,m,V,K,num;
	scanf("%d",&n);
	int *S;
	S=new int[n];
	for(i=0;i<n;i++){
		scanf("%d",&num);
		if(i==0) S[0]=num;
		else S[i]=S[i-1]+num;
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d%d",&V,&K);
		if(K==0) r=binarySearch(S,K,n-1,V,0);
		else r=binarySearch(S,K,n-1,V,S[K-1]);
		if(r!=-1) printf("%d\n",r);
		else printf("%d\n",n);
	}
}
