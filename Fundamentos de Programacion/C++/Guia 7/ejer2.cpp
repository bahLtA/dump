#include <iostream>
using namespace std;

void ValidarEdad(int &n);

int main(int argc, char *argv[]) {
	
	int dni,edad,mayorEdad=0,dniMayorEdad;
	
	cout<<"Ingrese el DNI del miembro"<<endl;
	cin>>dni;
	cout<<"Ingrese la edad del miembro"<<endl;
	cin>>edad;
	while(edad!=200){
		ValidarEdad(edad);
		if(edad>mayorEdad){
			mayorEdad = edad;
			dniMayorEdad = dni;
		}
		cout<<"Ingrese el DNI del miembro"<<endl;
		cin>>dni;
		cout<<"Ingrese la edad del miembro"<<endl;
		cin>>edad;
	}
	
	cout<<"El integrante de mayor edad es: "<<dniMayorEdad<<endl;
	cout<<"Su edad es: "<<mayorEdad;
	
	return 0;
}

void ValidarEdad(int &n){
	while(n<12 || n>90){
		cout<<"Ingrese la edad nuevamente"<<endl;
		cin>>n;
	}
}
