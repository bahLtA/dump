#include <iostream>
using namespace std;

void Calcular(float &imp);

int main(int argc, char *argv[]) {
	
	float imp;
	
	cout<<"Ingrese el importe bruto de la factura"<<endl;
	cin>>imp;
	
	Calcular(imp);
	
	cout<<"El importe final es de: $"<<imp;
	
	return 0;
}

void Calcular(float &imp){
	
	if(imp>50){
		imp=imp-(imp*0.05);
	}
	
	imp=imp+(imp*0.13);
}

