#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,cont;
	cout<<"Ingrese A"<<endl;
	cin>>a;
	cout<<"Ingrese B"<<endl;
	cin>>b;
	if (a>b){
		while (a>b){
			cout<<"A es mayor que B, Ingrese A nuevamente"<<endl;
			cin>>a;
			cout<<"Ingrese B nuevamente"<<endl;
			cin>>b;
		}
	}
	cont=a;
	while(cont<=b){
		cout<<cont<<endl;
		cont++;
	}
	
	return 0;
}

