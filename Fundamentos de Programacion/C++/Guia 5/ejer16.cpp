#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int vendedores[50],precios_reactivos[15],cant_vent[50];
	int cod_vend,cod_reac,cant,tot_nac=0,tot_inter=0,monto;
	char tipo;
	string nombres[50];
	
	//Inicializa los contadores de la venta en 0
	for (int i=0;i<50;i++){
		cant_vent[i]=0;
	}
	
	for(int i=0;i<50;i++){
		cout<<"Ingrese el nombre del vendedor "<<i+1<<endl;
		getline(cin,nombres[i]);
	}
	
	for(int i=0;i<15;i++){
		cout<<"Ingrese el precio del reactivo "<<i+1<<endl;
		cin>>precios_reactivos[i];
	}
	
	
	cout<<"Ingrese el codigo de vendedor"<<endl;
	cin>>cod_vend;
	
	while (cod_vend!=99){
		cod_vend--;
		cout<<"Ingrese el codigo de reactivo"<<endl;
		cin>>cod_reac;
		cod_reac--;
		cout<<"Ingrese la cantidad vendida"<<endl;
		cin>>cant;
		cout<<"Ingrese el tipo de venta (N: Nacional o I: Internacional)"<<endl;
		cin>>tipo;
		
		monto=cant*precios_reactivos[cod_reac];
		
		if(tipo=='N'){
			tot_nac+=monto;
		}else if (tipo=='I'){
			tot_inter+=monto;
		}
		
		
		cout<<"Cantidad vendida: "<<cant<<endl;
		cout<<"Monto vendido: $"<<monto<<endl;
		cout<<"Nombre del vendedor: "<<nombres[cod_vend]<<endl;
		
		cout<<"Ingrese el codigo de vendedor"<<endl;
		cin>>cod_vend;
	}
	
	cout<<"Monto total de ventas nacionales: $"<<tot_nac<<endl;
	cout<<"Monto total de ventas internaciones: $"<<tot_inter<<endl<<endl;
	
	for(int i=0;i<15;i++){
		cout<<"Cantidad vendida del reactivo "<<i+1<<endl;
	}
	
	
	
	
	return 0;
}

