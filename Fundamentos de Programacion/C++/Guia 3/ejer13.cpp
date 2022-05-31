#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre_cliente,cliente_mayor;
	int precio_art1,precio_art2,precio_art3,precio_art4,precio_art5;
	int cant,cod,mayor_cliente=0,compra,suma_total=0,cont=0;
	int tot1=0,tot2=0,tot3=0,tot4=0,tot5=0;
	int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
	
	cout<<"Ingrese el precio del articulo 1"<<endl;
	cin>>precio_art1;
	cout<<"Ingrese el precio del articulo 2"<<endl;
	cin>>precio_art2;
	cout<<"Ingrese el precio del articulo 3"<<endl;
	cin>>precio_art3;
	cout<<"Ingrese el precio del articulo 4"<<endl;
	cin>>precio_art4;
	cout<<"Ingrese el precio del articulo 5"<<endl;
	cin>>precio_art5;
	cout<<"Ingrese el nombre del cliente"<<endl;
	cin.ignore();
	getline(cin,nombre_cliente);
	
	
	while(nombre_cliente!="ZZZ"){
		cout<<"Ingrese la cantidad de articulos comprados"<<endl;
		cin>>cant;
		cout<<"Ingrese el codigo del producto"<<endl;
		cin>>cod;
		switch (cod) {
		case 1:	tot1+=cant;
				compra=precio_art1*cant;
				sum1+=compra;
				break;
		case 2: tot2+=cant;
				compra=precio_art2*cant;
				sum2+=compra;
				break;
		case 3: tot3+=cant;
				compra=precio_art3*cant;
				sum3+=compra;
				break;
		case 4: tot4+=cant;
				compra=precio_art4*cant;
				sum4+=compra;
				break;
		case 5:	tot5+=cant;
				compra=precio_art5*cant;
				sum5+=compra;
				break;
		};
		if (compra>mayor_cliente){
			mayor_cliente=compra;
			cliente_mayor=nombre_cliente;
		}
		suma_total+=compra;
		cont++;
		cout<<endl<<"Ingrese otro nombre"<<endl;
		cin.ignore();
		getline(cin,nombre_cliente);
	}
	cout<<endl<<"Monto total de ventas: "<<suma_total<<endl;
	cout<<"Venta total articulo 1: "<<sum1<<endl;
	cout<<"Venta total articulo 2: "<<sum2<<endl;
	cout<<"Venta total articulo 3: "<<sum3<<endl;
	cout<<"Venta total articulo 4: "<<sum4<<endl;
	cout<<"Venta total articulo 5: "<<sum5<<endl;
	cout<<"Ventas realizadas: "<<cont<<endl;
	cout<<"Cliente cuyo monto de venta sea el mayor"<<cliente_mayor;
	return 0;
}

