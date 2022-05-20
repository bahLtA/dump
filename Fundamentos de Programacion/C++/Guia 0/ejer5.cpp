#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int totMuj,totHom,totGen,porcentajeHom,porcentajeMuj;
	cout<<"Ingrese ela cantidad de mujeres"<<endl;
	cin>>totMuj;
	cout<<"Ingrese el total general"<<endl;
	cin>>totGen;
	totHom=totGen-totMuj;
	porcentajeHom=(totHom*100)/totGen;
	porcentajeMuj=(totMuj*100)/totGen;
	cout<<"Las mujeres son el "<<porcentajeMuj<<"% del total"<<endl;
	cout<<"Los hombres son el "<<porcentajeHom<<"% del total"<<endl;
	return 0;
}

