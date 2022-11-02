#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

void Doble(int n);
void Par(int n);
void QuintaPotencia(int n);

int main(int argc, char *argv[]) {
	
	char opcion;
	int dato;
	
	cout<<"Ingrese un dato"<<endl;
	cin>>dato;
	
	cout<<endl<<"CALCULOS"<<endl;
	cout<<"A- Calcular el doble del dato"<<endl;
	cout<<"B- Determinar si es par"<<endl;
	cout<<"C- Determinar su 5ta potencia"<<endl;
	cout<<"D- Salir"<<endl;
	cout<<"Elija una opcion (A, B, C, D)"<<endl;
	cin>>opcion;
	opcion=toupper(opcion);
	
	while(opcion !='A' || opcion!='B' || opcion!='C' || opcion!='D'){
		cout<<endl<<"Opcion incorrecta, ingresela nuevamente"<<endl;
		cin>>opcion;
		opcion=toupper(opcion);
	}
	
	switch(opcion){
	case 'A':
		Doble(dato);
		break;
	case 'B':
		Par(dato);
		break;
	case 'C':
		QuintaPotencia(dato);
		break;
	}
	
	return 0;
}

void Doble(int n){
	cout<<"El doble es: "<<n*2;
}

void Par(int n){
	if(n%2==0){
		cout<<"El dato es par"<<endl;
	}else{
		cout<<"El dato es impar"<<endl;
	}
}
	
void QuintaPotencia(int n){
	cout<<"La quinta potencia es: "<<(n*n*n*n*n);
}
