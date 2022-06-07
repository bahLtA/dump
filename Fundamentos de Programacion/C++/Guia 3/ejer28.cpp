#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cod,cant_pol,suma_polizas=0,cont,capital_asegurado,cuota_mensual,suma_capital=0;
	float porc_menos10,porc_menos50,porc_mas50,porcentaje;
	int suma_cuotas_mensuales,suma_comision=0,comision;
	int codigo_maspol,mas_pol=0,codigo_mascom,mas_com=0;
	
	cout<<"Ingrese el porcentaje de menos de 10 polizas vendidas"<<endl;
	cin>>porc_menos10;
	porc_menos10/=100;
	cout<<"Ingrese el porcentaje de menos de 50 polizas vendidas"<<endl;
	cin>>porc_menos50;
	porc_menos50/=100;
	cout<<"Ingrese el porcentaje de 50 o mas polizas vendidas"<<endl;
	cin>>porc_mas50;
	porc_mas50/=100;
	
	cout<<"Ingrese el codigo de vendedor"<<endl;
	cin>>cod;
	while (cod!=0){
		cout<<"Ingrese la cantidad de polizas vendidas"<<endl;
		cin>>cant_pol;
		suma_polizas+=cant_pol;
		
		if (cant_pol>mas_pol){
			mas_pol=cant_pol;
			codigo_maspol=cod;
		}
		
		if (cant_pol<10){
			porcentaje=porc_menos10;
		}else if (cant_pol<50){
			porcentaje=porc_menos50;
		}else if (cant_pol>=50){
			porcentaje=porc_mas50;
		}
		
		cont=0;
		suma_cuotas_mensuales=0;
		
		while (cont!=cant_pol){
			cont++;
			
			cout<<"Ingrese el capital asegurado de la poliza"<<endl;
			cin>>capital_asegurado;
			suma_capital+=capital_asegurado;
			cout<<"Ingrese la cuota mensual a pagar"<<endl;
			cin>>cuota_mensual;
			suma_cuotas_mensuales+=cuota_mensual;
		}
		comision=suma_cuotas_mensuales/porcentaje;
		suma_comision+=comision;
		
		if (comision>mas_com){
			mas_com=comision;
			codigo_mascom=cod;
		}
		
		cout<<"Ingrese el codigo de vendedor"<<endl;
		cin>>cod;
	}
	cout<<"Total de polizas vendidas: "<<suma_polizas<<endl;
	cout<<"Total de capital asegurado: $"<<suma_capital<<endl;
	cout<<"Total a pagar en concepto de comision: $"<<suma_comision<<endl<<endl;
	cout<<"Vendedor que mas polizas vendio: "<<codigo_maspol<<endl;
	cout<<"Vendedor que recibio mas comision: "<<codigo_mascom<<endl;
	
	return 0;
}

