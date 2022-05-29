#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre_y_apellido;
	int cantidad,precio_unitario;
	float precio;
	
	cout<<"Ingrese el nombre y el apellido del cliente: ";
	getline(cin,nombre_y_apellido);
	cout<<"Ingrese la cantidad comprada del articulo: ";
	cin>>cantidad;
	cout<<"Ingrese el precio unitario: ";
	cin>>precio_unitario;
	precio=cantidad*precio_unitario;
	cout<<"Monto total: $"<<precio<<endl;
	precio-=precio*0.05;
	cout<<"Monto luego del descuento: $"<<precio<<endl;
	precio-=precio*0.21;
	cout<<"Monto final: $"<<precio<<endl;
	
	return 0;
}

