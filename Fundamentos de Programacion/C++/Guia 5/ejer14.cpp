#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int cont=0,suma_altura=0,dato[500][3]; //0 para Edad, 1 para Documento y 2 para altura
	string persona[500][3]; //0 para nombre, 1 para domicilio y 2 para el setso
	float promedio;
	
	do{
		cout<<"Ingrese Apellido y Nombre"<<endl;
		getline(cin, persona[cont][0]);
		cout<<"Ingrese el domicilio de "<<persona[cont][0]<<endl;
		getline(cin, persona[cont][1]);
		cout<<"Ingrese la edad de "<<persona[cont][0]<<endl;
		cin>>dato[cont][0];
		cout<<"Ingrese el documento de "<<persona[cont][0]<<endl;
		cin>>dato[cont][1];
		cin.ignore();
		cout<<"Ingrese el sexo de "<<persona[cont][0]<<endl;
		getline(cin,persona[500][2]);
		cout<<"Ingrese la altura de "<<persona[cont][0]<<endl;
		cin>>dato[cont][2];
		suma_altura+=dato[cont][2];
		cin.ignore();
		
		cont++;
	} while(cont!=500);
	
	promedio=suma_altura/500;
	
	for (int i=0;i<500;i++){
		if (altura[i]>promedio){
			cout<<"Apellido y Nombre: "<<persona[i][0]<<endl;
			cout<<"Documento: "<<dato[i][1]<<endl;
			cout<<"Sexo: "<<persona[i][2]<<endl;
		}
	}
	
	return 0;
}

