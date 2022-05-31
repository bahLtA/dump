#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string nom,aux;
	cout<<"Ingrese un nombre"<<endl;
	getline(cin,nom);
	while (nom!=aux){
		aux=nom;
		cout<<"Ingrese otro nombre"<<endl;
		getline(cin,nom);
	}
	return 0;
}

