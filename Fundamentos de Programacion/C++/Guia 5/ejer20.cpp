#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int n,precio_i7,cod,aux,cant_cambio[500],cant_cambio_global=0,cant_areas[500],equipos[500][4],tot=0,menor=99999; //0 para i7, 1 para i5, 2 para i3 y 4 para pentium e inferiores
	string nombres[500][2],area,resp_menos; //0 para nombre de reparticion, 1 para nombre de representante
	
	cout<<"Ingrese N"<<endl;
	cin>>n;
	
	cout<<"Ingrese el precio de las computadoras con i7"<<endl;
	cin>>precio_i7;
	cin.ignore();
	
	for (int i=0;i<n;i++){
		for (int j=0;j<4;j++){
			equipos[i][j]=0;
		}
		cant_areas[i]=0;
		cant_cambio[i]=0;
	}
	
	for (int i=0;i<n;i++){
		cout<<"Ingrese el nombre de la reparticion "<<i+1<<endl;
		getline(cin, nombres[i][0]);
		cout<<"Ingrese el nombre del representante"<<endl;
		getline(cin, nombres[i][1]);
	}
	
	cout<<"Ingrese el codigo de la reparticion"<<endl;
	cin>>cod;
	
	while (cod!=9999){
		cout<<"Ingrese el nombre del area"<<endl;
		getline(cin,area);
		cant_areas[cod-1]++;
		
		cout<<"Ingrese la cantidad de equipos i7"<<endl;
		cin>>aux;
		equipos[cod-1][0]+=aux;
		
		cout<<"Ingrese la cantidad de equipos i5"<<endl;
		cin>>aux;
		equipos[cod-1][1]+=aux;
		
		cout<<"Ingrese la cantidad de equipos i3"<<endl;
		cin>>aux;
		equipos[cod-1][2]+=aux;
		
		cant_cambio[cod-1]+=aux;
		
		cout<<"Ingrese la cantidad de equipos Pentium o inferiores"<<endl;
		cin>>aux;
		equipos[cod-1][3]+=aux;
		
		cant_cambio[cod-1]+=aux;
		
		cant_cambio_global+=cant_cambio[cod-1];
		
		cout<<"Ingrese el codigo de la reparticion"<<endl;
		cin>>cod;
	}
	
	//a)
	cout<<"Repartición Cant.Áreas i7 i5 i3 Pentium o Inf. Total a cambiar Porcentaje"<<endl;
	
	for (int i=0;i<n;i++){
		cout<<nombres[i][0]<<" ";
		cout<<cant_areas[i]<<" ";
		cout<<equipos[i][0]<<" ";
		cout<<equipos[i][1]<<" ";
		cout<<equipos[i][2]<<" ";
		cout<<equipos[i][3]<<" ";
		for (int j=0;j<4;j++){
			tot+=equipos[i][j];
		}
		cout<<cant_cambio[i]<<" ";
		cant_cambio_global+=cant_cambio[i];
		cout<<(cant_cambio*100)/(equipos[i][0]+equipos[i][1]+equipos[i][2]+equipos[i][3])<<"% "<<endl;
	}
	
	cout<<"Porcentaje de cambio en total: "<<(cant_cambio_global*100)/tot<<endl;
	
	//b)
	cout<<"Gasto por reparticion: "<<endl;
	for (int i=0;i<n;i++){
		cout<<"Reparticion: "<<nombres[i][0]<<endl;
		cout<<"Gasto: $"<<cant_cambio[i]*precio_i7<<endl;
	}
	
	//c)
	for (int i=0;i<n;i++){
		if ((cant_cambio*precio_i7)<menor){
			menor=cant_cambio*precio_i7;
			resp_menos=nombres[i][1];
		}
	}
	return 0;
}

