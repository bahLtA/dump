#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	string reparticion[500][3],responsable_menos; //0 para Nombre de reparticion, 1 para Nombre del Responsable, 2 para nombre de area
	int n,cont=0,cod,precio_i7,cont_cambio_global=0;
	int equipo[500][4];//0 para i7, 1 para i5, 2 para i3, 3 para pentium o inferiores
	int cont_cambio[500],menos_gasto=9999;
	
	cout<<"Ingrese la cantidad de reparticiones"<<endl;
	cin>>n;
	cout<<"Ingrese el precio del equipo con el i7"<<endl;
	cin>>precio_i7;
	
	//Inicializa el contador de las que hay que cambiar
	for (int i=0;i<n;i++){
		cont_cambio[i]=0;
	}
	
	for (int i=0;i<n;i++){
		cout<<"Ingrese el nombre de la reparticion"<<endl;
		getline(cin,reparticion[i][0]);
		cout<<"Ingrese el nombre del responsable de la reparticion"<<endl;
		getline(cin,reparticion[i][1]);
	}
	
	cout<<"Ingrese el codigo de reparticion"<<endl;
	cin>>cod;
	
	while (cod!=9999){
		cout<<"Ingrese el nombre del area"<<endl;
		getline(cin,reparticion[cod-1][2]);
		cout<<"Ingrese la cantidad de equipos i7"<<endl;
		cin>>equipo[cod-1][0];
		cout<<"Ingrese la cantidad de equipos i5"<<endl;
		cin>>equipo[cod-1][1];
		cout<<"Ingrese la cantidad de equipos i3"<<endl;
		cin>>equipo[cod-1][2];
		cout<<"Ingrese la cantidad de equipos Pentium o inferior"<<endl;
		cin>>equipo[cod-1][3];
		
		cont_cambio[cod-1]+=equipo[cod-1][2]+equipo[cod-1][3];
		
		cont_cambio_global+=cont_cambio[cod-1];
		
		cont+=equipo[cod-1][0]+equipo[cod-1][1]+equipo[cod-1][2]+equipo[cod-1][3];
		
		cin.ignore();
	}
	
	//a)
	
	cout<<"Reparticion"<<setw(15);
	cout<<"Nombre del area"<<setw(17);
	cout<<"i7"<<setw(5);
	cout<<"i5"<<setw(5);
	cout<<"i3"<<setw(5);
	cout<<"Pentium o Inf."<<setw(15);
	cout<<"Total a cambiar"<<setw(17);
	cout<<"Porcentaje"<<setw(15);
	cout<<endl;
	for (int i=0;i<n;i++){
		cout<<reparticion[i][0]<<setw(15);
		cout<<reparticion[i][2]<<setw(17);
		cout<<equipo[i][0]<<setw(5);
		cout<<equipo[i][1]<<setw(5);
		cout<<equipo[i][2]<<setw(5);
		cout<<equipo[i][3]<<setw(15);
		cout<<cont_cambio[i]<<setw(17);
		cout<<((equipo[i][0]+equipo[i][1]+equipo[i][2]+equipo[i][3])*cont_cambio[i])/100<<"%"<<setw(15);
		cout<<endl;
	}
	
	cout<<"Porcentaje de cambio en total: "<<((cont*cont_cambio_global)/100)<<"%"<<endl;
	
	//b)
	for (int i=0;i<n;i++){
		cout<<"Reparticion: "<<reparticion[i][0]<<endl;
		cout<<"Gasto: $"<<cont_cambio_global*precio_i7<<endl;
		if ((menos_gasto)<(cont_cambio[i]*precio_i7)){
			menos_gasto=cont_cambio[i]*precio_i7;
			responsable_menos=reparticion[i][1];
		}
	}
	
	//c)
	cout<<"El responsable que menos debe gastar: "<<responsable_menos<<" Con un total de $"<<menos_gasto<<endl;
	
	
	return 0;
}

