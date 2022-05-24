#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num_inicial_comun,num_inicial_est,num_inicial_trab;
	int num_final_comun,num_final_est,num_final_trab;
	int precio_comun,precio_est,precio_trab;
	int cant_comun,cant_est,cant_trab;
	int total;
	
	cout<<"Ingrese la numeracion inicial de boletos comunes"<<endl;
	cin>>num_inicial_comun;
	cout<<"Ingrese la numeracion final de boletos comunes"<<endl;
	cin>>num_final_comun;
	cout<<"Ingrese la numeracion inicial de boletos estudiantiles"<<endl;
	cin>>num_inicial_est;
	cout<<"Ingrese la numeracion final de boletos estudiantiles"<<endl;
	cin>>num_final_est;
	cout<<"Ingrese la numeracion inicial de boletos trabajador"<<endl;
	cin>>num_inicial_trab;
	cout<<"Ingrese la numeracion final de boletos trabajador"<<endl;
	cin>>num_final_trab;
	cout<<endl<<"Ingrese el precio del boleto estudiantil"<<endl;
	cin>>precio_est;
	precio_comun=precio_est+(precio_est*0.5);
	precio_trab=precio_comun-(precio_comun*0.4);
	
	cant_comun=num_final_comun-num_inicial_comun;
	cant_est=num_final_est-num_inicial_est;
	cant_trab=num_final_trab-num_inicial_trab;
	
	total=cant_comun*precio_comun+cant_est*precio_est+cant_trab*precio_trab;
	
	cout<<"cantidad de boletos comunes: "<<cant_comun<<endl;
	cout<<"cantidad de boletos estudiantiles: "<<cant_est<<endl;
	cout<<"cantidad de boletos trabajador: "<<cant_trab<<endl<<endl;
	cout<<"Total recaudado: $"<<total;
	return 0;
}

