#include <iostream>
#include <deque>
using namespace std;

int main(){
	int n,i,f;
	char l;
	string nombre;
	deque<string> F1,F2;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>l>>f;
		if(l=='E'){
			cin>>nombre;
			if(f==1) F1.push_back(nombre);
			else F2.push_back(nombre);
		}
		else{
			if(f==1){
				cout<<F1.front()<<endl;
				F1.pop_front();
			}
			else{
				cout<<F2.back()<<endl;
				F2.pop_back();
			}
		}
	}
}
