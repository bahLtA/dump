#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int princ[5],x3[5];
	
	for (int i=0;i<5;i++){
		cout<<"Ingrese un numero"<<endl;
		cin>>princ[i];
		x3[i]=princ[i]*3;
	}
	
	cout<<endl<<endl;
	
	for (int i=0;i<5;i++){
		cout<<x3[i]<<endl;
	}
	return 0;
}

