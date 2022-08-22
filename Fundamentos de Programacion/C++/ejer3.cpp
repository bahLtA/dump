#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int nroCliente[999],n,cod,i;
	float saldo[999];
	bool band=false;
	
	cout<<"Ingrese la cantidad de clientes"<<endl;
	cin>>n;
	
	for (int i=0;i<n;i++){
		cout<<"Ingrese el numero de cliente"<<endl;
		cin>>nroCliente[i];
		cout<<"Ingrese el saldo del cliente "<<nroCliente[i]<<endl;
		cin>>saldo[i];
	}
	
	cout<<"Ingrese el codigo del cliente a buscar"<<endl;
	cin>>cod;
	i=0;
	while (!band && i<=n){
		if (cod == nroCliente[i]){
			band=true;
		}
		i++;
	}
	
	if (band){
		cout<<"El saldo del cliente: "<<nroCliente[i-1]<<" es $"<<saldo[i-1];
	}else{
		cout<<"CLIENTE INEXISTENTE";
	}
	
	return 0;
}
