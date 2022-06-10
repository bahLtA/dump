#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num[10];
	
	for (int i=0;i<10;i++){
		cout<<"Ingrese un numero"<<endl;
		cin>>num[i];
	}
	cout<<endl<<endl;
	for (int i=9;i>=0;i--){
		cout<<num[i]<<endl;
	}
	return 0;
}

