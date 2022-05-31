#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string nya,more_alto,low_peso;
	int n,peso,altura,mas_alto=0,menor_peso=9999;
	int cont=0;
	
	cout<<"Ingrese la cantidad de alumnos"<<endl;
	cin>>n;
	while(cont!=n){
		cout<<"Ingrese el nombre del alumno"<<endl;
		getline(cin,nya);
		cout<<"Ingrese el peso de "<<nya<<endl;
		cin>>peso;
		if (peso<menor_peso){
			menor_peso=peso;
			low_peso=nya;
		}
		cout<<"Ingrese la altura de "<<nya<<endl;
		cin>>altura;
		if (altura>mas_alto){
			mas_alto=altura;
			more_alto=nya;
		}
	}
	cout<<"El alumno mas alto es "<<mas_alto<<endl;
	cout<<"El alumno de menor peso es "<<low_peso;
	return 0;
}

