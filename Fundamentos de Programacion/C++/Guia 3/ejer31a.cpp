#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int codigo,ant,dni,sueldo,cont=0,total=0,cont_10=0;
	string ayn,mes;
	
	cout<<"Ingrese el mes"<<endl;
	cin.ignore();
	getline(cin,ayn);
	
	cout<<"Ingrese el codigo de la escuela"<<endl;
	cin>>codigo;
	while (codigo!=999){
		ant=codigo;
		while (ant==codigo){
			cout<<"Ingrese el documento del docente"<<endl;
			cin>>dni;
			cout<<"Ingrese apellido y nombre del docente"<<endl;
			cin.ignore();
			getline(cin,ayn);
			cout<<"Ingrese el sueldo del docente"<<endl;
			cin>>sueldo;
			
			if (sueldo>10000){
				cont_10++;
			}
			
			total+=sueldo;
			cont++;
			
			cout<<"Ingrese el codigo de la escuela"<<endl;
			cin>>codigo;
		}
	}
	cout<<"Liquidacion del mes de "<<mes<<endl;
	cout<<"Cantidad de docentes procesados "<<cont<<endl;
	cout<<"Total a pagar en todas las escuelas: "<<total<<endl;
	cout<<"Cantidad de docentes que cobran mas de $10000: "<<cont_10<<endl;
	
	return 0;
}

