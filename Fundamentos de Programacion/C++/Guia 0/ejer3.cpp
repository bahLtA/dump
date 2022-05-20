#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int fecha,mes,dia,anio;
	cout<<"Ingrese la fecha (En formato MMDDAA)"<<endl;
	cin>>fecha;
	mes=fecha/10000;
	dia=(fecha/100)-(mes*100);
	anio=fecha-mes*10000-dia*100;
	cout<<"La fecha es: "<<dia<<"/"<<mes<<"/20"<<anio;
	return 0;
}

