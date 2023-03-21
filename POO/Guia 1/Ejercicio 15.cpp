#include <iostream>
#include <cctype>
using namespace std;

void VerificarDato(char opcion){
	while(opcion!='A'&&opcion!='B'&&opcion!='C'&&opcion!='D'){
		cout<<endl<<"opcion incorrecta, ingresela nuevamente"<<endl;
		cin>>opcion;
		opcion = toupper(opcion);
	}
}

//El doble del dato
void A(int dato){
	cout<<endl<<"El doble del dato: "<<dato*2<<endl;
}
//Par o inpar
void B(int dato){
	if(dato%2==0){
		cout<<endl<<"El dato es par"<<endl;
	}else{
		cout<<endl<<"El dato es inpar"<<endl;
	}
}
//Primo
bool C(int dato){
	if(dato<=1){
		return false;
	}
	for(int i=2;i<dato;i++){
		if(dato%i==0){
			return false;
		}
	}
	return true;
}

int main(int argc, char *argv[]) {
	
	char opcion;
	int dato;
	
	cout<<"Ingrese un dato"<<endl;
	cin>>dato;
	
	do{
		cout<<endl<<"CALCULOS"<<endl;
		cout<<"A- Calcular el doble del dato"<<endl;
		cout<<"B- Determinar si es par"<<endl;
		cout<<"C- Determinar si es primo"<<endl;
		cout<<"D- Salir"<<endl;
		cout<<"Elija una opcion (A,B,C,D)"<<endl;
		cin>>opcion;
		opcion = toupper(opcion);
		VerificarDato(opcion);
		
		if(opcion=='A'){
			A(dato);
		}else if(opcion=='B'){
			B(dato);
		}else if(opcion=='C'){
			if(C(dato)){
				cout<<endl<<"El numero es primo"<<endl;
			}else{
				cout<<endl<<"El numero no es primo"<<endl;
			}
		}
	}while(opcion!='D');
	return 0;
}

