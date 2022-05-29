#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//IMC
	string nombre;
	int peso;
	float estatura,IMC;
	cout<<"Ingrese el nombre de la persona"<<endl;
	getline(cin,nombre);
	cout<<"Ingrese el peso (en kgs)"<<endl;
	cin>>peso;
	cout<<"Ingrese la estatura (en metros)"<<endl;
	cin>>estatura;
	IMC=peso/(estatura*estatura);
	cout<<"El IMC de "<<nombre<<" es: "<<IMC;
	return 0;
}

