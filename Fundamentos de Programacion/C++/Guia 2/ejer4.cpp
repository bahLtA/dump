#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int nlado1,nlado2,nlado3,perimetro;
	string cMensaje;
	
	cout<<"Ingrese el 1er lado"<<endl;
	cin>>nlado1;
	cout<<"Ingrese el 2do lado"<<endl;
	cin>>nlado2;
	cout<<"Ingrese el 3er lado"<<endl;
	cin>>nlado3;
	if (nlado1==nlado2){
		if (nlado1==nlado3){
			cMensaje="Equilatero";
		}else{
			cMensaje="Isosceles";
		}
	}else if (nlado1==nlado3){
		cMensaje="Isosceles";
	}else if (nlado2==nlado3){
		cMensaje="Isosceles";
	}else{
		cMensaje="Escaleno";
	}
	perimetro=nlado1+nlado2+nlado3;
	cout<<endl<<"Tipo de triangulo: "<<cMensaje<<endl;
	cout<<"Perimetro: "<<perimetro;
	
	return 0;
}

