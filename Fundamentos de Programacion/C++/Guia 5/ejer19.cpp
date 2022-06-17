#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int cod,cont=0,costo[20],contaux,cant_interesados[20],cont_mas10=0,presupuesto=0;
	string tema[20];
	
	
	//Inicializa el contador de interesados por temas
	for (int i=0;i<20;i++){
		cant_interesados=0;
	}
	
	for (int i=0;i<20;i++){
		cout<<"Ingrese el nombre del tema "<<i+1<<endl;
		getline(cin,tema[i]);
		
		cout<<"Ingrese el costo de capacitacion de una persona en este tema"<<endl;
		cin>>costo[i];
		cin.ignore();
	}
	
	do{
		contaux=0;
		cout<<"Ingrese el codigo de tema en el cual quiere capacitarse"<<endl;
		cin>>cod;
		
		while (cod!=0){
			
			//Punto 4
			presupuesto+=costo[cod-1];
			
			cant_interesados[cod-1]++;
			contaux++;
			cout<<"Ingrese el codigo de tema en el cual quiere capacitarse"<<endl;
			cin>>cod;
		}
		
		//Punto 3
		if (contaux>10){
			cont_mas10++;
		}
		
		//Punto 1
		cout<<"La persona "<<cont+1<<" se quiere capacitar en "<<contaux<<" temas"<<endl;
		
		cont++;
	} while(cont!=500);
	
	//Punto 2
	
	cout<<"Descripcion del tema"<<setw(25)<<"Cantidad de interesados"<<endl;
	for (int i=0;i<20;i++){
		cout<<tema[i]<<setw(25)<<cant_interesados[i]<<endl;
	}
	
	//Punto 3
	cout<<endl<<"Encuestados que eligieron mas de 10 temas: "<<cont_mas10<<endl;
	
	//Punto 4
	cout<<endl<<"Presupuesto necesario para capacitar a todos: $"<<presupuesto<<endl;
	
	return 0;
}

