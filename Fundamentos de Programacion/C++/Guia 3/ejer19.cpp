#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int cant,tiempo_ant,tiempo,cont_ab=0,t_gan=99999;
	string nya,ganador;
	int cont=0,cont_mej=0;
	
	
	cout<<"Ingrese la cantidad de participantes"<<endl;
	cin>>cant;
	cout<<"Ingrese el mejor tiempo de la edicion anterior"<<endl;
	cin>>tiempo_ant;
	while (cont<cant){
		cout<<endl<<"Ingrese el nombre y apellido del competidor"<<endl;
		cin.ignore();
		getline(cin,nya);
		cout<<"Ingrese el tiempo empleado por "<<nya<<endl;
		cin>>tiempo;
		
		if (tiempo<t_gan){
			t_gan=tiempo;
			ganador=nya;
		}
		
		if (tiempo==0){
			cont_ab++;
		}
		
		if (tiempo<tiempo_ant){
			cont_mej++;
		}
		cont++;
	}
	cout<<endl<<"El ganador es: "<<ganador<<endl;
	cout<<cont_ab<<" abandonaron la prueba"<<endl;
	cout<<cont_mej<<" mejoraron el tiempo de la edicion anterior";
	return 0;
}

