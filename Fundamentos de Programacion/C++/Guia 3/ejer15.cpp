#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cod,cant,cont=0,contaux,tiempo_total,tiempo_ganador=9999,tiempo_nat,tiempo_car,tiempo_bic;
	int sum_n=0,sum_c=0,sum_b=0;
	int num,num_ganador=0,num_perdedor=0;
	int hora_final,min_final,tiempo_perdedor=0;
	cout<<"Ingrese la cantidad de competidores"<<endl;
	cin>>cant;
	cout<<endl;
	while (cont<cant){
		cout<<endl<<"Ingrese el numero del competidor"<<endl;
		cin>>num;
		contaux=0;
		do{
		cout<<"Ingrese el codigo del deporte (1=natacion,2=carrera,3=bicicleta)"<<endl;
		cin>>cod;
		switch (cod){
		case 1: cout<<"Ingrese el tiempo que hizo el competidor "<<num<<" en este deporte (en minutos)"<<endl;
		cin>>tiempo_nat;
		sum_n+=tiempo_nat;
		break;
		case 2: cout<<"Ingrese el tiempo que hizo el competidor "<<num<<" en este deporte (en minutos)"<<endl;
		cin>>tiempo_car;
		sum_c+=tiempo_car;
		break;
		case 3: cout<<"Ingrese el tiempo que hizo el competidor "<<num<<" en este deporte (en minutos)"<<endl;
		cin>>tiempo_bic;
		sum_b+=sum_b;
		break;
		}
		contaux++;
		}while(contaux!=3);
	tiempo_total=tiempo_nat+tiempo_car+tiempo_bic;
	cout<<"El tiempo total es de "<<tiempo_total<<" minutos"<<endl;
	if (tiempo_total<tiempo_ganador){
		tiempo_ganador=tiempo_total;
		num_ganador=num;
	}
	if (tiempo_total>tiempo_perdedor){
		tiempo_perdedor=tiempo_total;
		num_perdedor=num;
	}
	cont++;
	}
	hora_final=(tiempo_perdedor/60);
	min_final=tiempo_perdedor%60;
	
	cout<<endl<<"El tiempo del ganador es de "<<tiempo_ganador<<" minutos"<<endl;
	cout<<"La carrera termino a las "<<hora_final+17<<":"<<min_final<<"hs"<<endl;
	cout<<"El tiempo promedio en Natacion es de: "<<sum_n/cant;
	cout<<"El tiempo promedio en Carrera es de: "<<sum_c/cant;
	cout<<"El tiempo promedio en Bicicleta es de: "<<sum_b/cant;
	return 0;
}

