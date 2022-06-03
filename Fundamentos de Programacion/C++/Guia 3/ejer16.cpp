#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float porc1,porc2,porc3,porc4;
	int cont=0,valor,cat,tot_imp=0,imp;
	string patente,marca;
	
	cout<<"Ingrese el porcentaje de la categoria 1"<<endl;
	cin>>porc1;
	porc1*=(porc1/100);
	cout<<"Ingrese el porcentaje de la categoria 2"<<endl;
	cin>>porc2;
	porc2*=(porc2/100);
	cout<<"Ingrese el porcentaje de la categoria 3"<<endl;
	cin>>porc3;
	porc3*=(porc3/100);
	cout<<"Ingrese el porcentaje de la categoria 4"<<endl;
	cin>>porc4;
	porc4*=(porc4/100);
	while (cont<=5000){
		cout<<"Ingrese la patente"<<endl;
		cin.ignore();
		getline(cin,patente);
		cout<<"Ingrese la marca"<<endl;
		cin.ignore();
		getline(cin,marca);
		cout<<"Ingrese el valor del auto"<<endl;
		cin>>valor;
		cout<<"Ingrese la categoria"<<endl;
		cin>>cat;
		switch (cat){
		case 1: imp=valor*porc1;
		break;
		case 2: imp=valor*porc2;
		break;
		case 3: imp=valor*porc3;
		break;
		case 4: imp=valor*porc4;
		break;
		}
		tot_imp+=imp;
		cont++;
		cout<<"Patente: "<<patente<<endl;
		cout<<"Valor: $"<<valor<<endl;
		cout<<"Impuestos: $"<<imp<<endl<<endl;
		
	}
	cout<<endl<<"El total a recaudar por impuestos es de: $"<<tot_imp;
	return 0;
}

