#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cant,precio,sum=0;
	
	cout<<"Ingrese la cantidad de articulos vendidos"<<endl;
	cin>>cant;
	while (cant!=0){
		cout<<"Ingrese el precio unitario del articulo"<<endl;
		cin>>precio;
		
		if (precio<0){
			cout<<"El precio no puede ser menor a 0"<<endl;
		}else{
			sum+=cant*precio;
		}
		cout<<endl<<"Ingrese nuevamente la cantidad de unidades vendidas"<<endl;
		cin>>cant;
	}
	
	cout<<endl<<"El importe total de la factura es de: $"<<sum;
	return 0;
}

