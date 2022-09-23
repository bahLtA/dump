#include <iostream>
using namespace std;

void validar_edad(int &n);

int main(int argc, char *argv[]) {
	
	
	int miembros[2][9999],i=0,edad;//0 para el dni, 1 para la edad
	
	cout<<"Ingrese el DNI del miembro"<<endl;
	cin>>miembros[0][0];
	cout<<"Ingrese la edad del miembro"<<endl;
	cin>>edad;
	
	do{
		validar_edad(edad);
		miembros[1][i]=edad;
		
		cout<<"Ingrese el DNI del miembro"<<endl;
		cin>>miembros[0][i];
		cout<<"Ingrese la edad del miembro"<<endl;
		cin>>edad;
		i++;
	}while(edad!=200);
	
	return 0;
}

void validar_edad(int &n){
	while ((n<12) || (n>90) && (n!=200)){
		cout<<"Edad fuera del rango, ingresela nuevamente"<<endl;
		cin>>n;
	}
}

