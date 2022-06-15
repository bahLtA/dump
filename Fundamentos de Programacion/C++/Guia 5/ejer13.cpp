#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int precio_unitario[12],n,cant_vendidas[12],cant,producto_menor,cant_menor=99999;
	string descripcion[12];
	
	for (int i=0;i<12;i++){
		cant_vendidas[i]=0;
	}
	
	for (int i=0;i<12;i++){
		cout<<"Ingrese la descripcion del producto "<<i+1<<endl;
		getline(cin,descripcion[i]);
		
		cout<<"Ingrese el precio unitario del producto "<<i+1<<endl;
		cin>>precio_unitario[i];
		cin.ignore();
	}
	
	cout<<"Ingresa el numero de producto"<<endl;
	cin>>n;
	while (n!=0){
		cout<<"Ingrese la cantidad de productos "<<n<<" vendidos es esta venta"<<endl;
		cin>>cant;
		
		cant_vendidas[n-1]+=cant;
		
		cout<<"Ingrese el numero de producto"<<endl;
		cin>>n;
	}
	//a)
	cout<<"NRO. DE PRODUCTO"<<setw(20)<<"DESCRIPCION"<<setw(20)<<"CANTIDAD TOTAL VENDIDA"<<setw(20)<<"IMPORTE TOTAL"<<endl;
	for (int i=0;i<12;i++){
		cout<<i+1<<setw(20)<<descripcion[i]<<setw(20)<<cant_vendidas[i]<<setw(20)<<cant_vendidas[i]*precio_unitario[i]<<endl;
	}
	//b)
	for (int i=0;i<12;i++){
		if (cant_menor>cant_vendidas[i]){
			producto_menor=i+1;
			cant_menor=cant_vendidas[i];
		}
	}
	cout<<"El producto menos vendido fue el numero "<<producto_menor<<" con un total de "<<cant_menor<<endl;
	
	return 0;
}

