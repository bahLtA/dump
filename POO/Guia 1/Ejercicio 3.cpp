#include <iostream>
#include <string>
using namespace std;

struct alumnos{
	string nombre;
	int edad;
} alumno [457];

void ValidarEdad(int &edad);

int main(int argc, char *argv[]) {
	
	int edad;
	
	for(int i=0;i<457;i++){
		cout<<"Ingrese el nombre del integrante "<<i+1<<endl;
		getline(cin,alumno[i].nombre);
		cout<<"Ingrese la edad del integrante "<<i+1<<endl;
		cin>>edad;
		
		
		ValidarEdad(edad);
		
		cin.ignore();
		
		alumno[i].edad=edad;
		
	}
	
	return 0;
}

void ValidarEdad(int &edad){
	while(edad<12 || edad>90){
		cout<<"Ingrese la edad nuevamente"<<endl;
		cin>>edad;
	}
	
}
