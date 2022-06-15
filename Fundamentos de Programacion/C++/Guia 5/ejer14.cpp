#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int cont=0,edad[500],documento[500],altura[500],suma_altura=0;
	string domicilio[500],nya[500],sexo[500];
	float promedio;
	
	do{
		cout<<"Ingrese Apellido y Nombre"<<endl;
		getline(cin, nya[cont]);
		cout<<"Ingrese el domicilio de "<<nya[cont]<<endl;
		getline(cin, domicilio[cont]);
		cout<<"Ingrese la edad de "<<nya[cont]<<endl;
		cin>>edad[cont];
		cout<<"Ingrese el documento de "<<nya[cont]<<endl;
		cin>>documento[cont];
		cin.ignore();
		cout<<"Ingrese el sexo de "<<nya[cont]<<endl;
		getline(cin,sexo[cont]);
		cout<<"Ingrese la altura de "<<nya[cont]<<endl;
		cin>>altura[cont];
		suma_altura+=altura[cont];
		cin.ignore();
		
		cont++;
	} while(cont!=2);
	
	promedio=suma_altura/500;
	
	for (int i=0;i<500;i++){
		if (altura[i]>promedio){
			cout<<"Apellido y Nombre: "<<nya[i]<<endl;
			cout<<"Documento: "<<documento[i]<<endl;
			cout<<"Sexo: "<<sexo[i]<<endl;
		}
	}
	
	return 0;
}

