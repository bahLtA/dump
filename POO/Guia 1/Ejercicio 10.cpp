#include <iostream>
using namespace std;

void Descuento(float &tot,int cant);

int main(int argc, char *argv[]) {
	
	float valor,total;
	int cant;
	
	cout<<"Ingrese el valor del pantalon"<<endl;
	cin>>valor;
	cout<<"Ingrese la cantidad de pantalones comprados"<<endl;
	cin>>cant;
	
	total=valor*cant;
	Descuento(total,cant);
	
	cout<<"Total a pagar: $"<<total;
	
	return 0;
}

void Descuento(float &tot,int cant){
	if(cant>=5){
		tot=tot-(tot*0.25);
	}else{
		tot=tot-(tot*0.1);
	}
}

