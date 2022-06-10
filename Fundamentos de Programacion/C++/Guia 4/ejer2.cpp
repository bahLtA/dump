#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string pal,subcadena;
	int inicio,fin,t;
	
	cout<<"Ingrese una cadena de caracteres"<<endl;
	getline(cin,pal);
	
	cout<<"Ingrese la posicion inicial"<<endl;
	cin>>inicio;
	cout<<"Ingrese la posicion final"<<endl;
	cin>>fin;
	
	if(inicio>fin){
		while (inicio>fin){
			cout<<endl<<"la posicion inicial es mayor a la posicion final, ingreselos nuevamente"<<endl;
			cout<<"Posicion inicial: ";
			cin>>inicio;
			cout<<"Posicion final: ";
			cin>>fin;
		}
	}
	
	t=fin-inicio;
	
	subcadena=pal.substr(inicio,t);
	
	cout<<"La subcadena es: "<<subcadena;
	
	
	return 0;
}

