#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int parcial1,parcial2,parcial3,promocion,regular,nota,promedio;
	string concepto;
	cout<<"Ingrese la nota del parcial 1"<<endl;
	cin>>parcial1;
	cout<<"Ingrese la nota del parcial 2"<<endl;
	cin>>parcial2;
	cout<<"Ingrese la nota del parcial 3"<<endl;
	cin>>parcial3;
	cout<<"Ingrese la nota minima para regularizar"<<endl;
	cin>>regular;
	cout<<"Ingrese la nota minima para promocionar"<<endl;
	cin>>promocion;
	promedio=(parcial1+parcial2+parcial3)/3;
	
	nota=(promedio-promocion)*6/(100-promocion)+4;
	switch (nota) {
	case 4:
	case 5:	concepto="Aprobado";
			break;
	case 6:
	case 7: concepto="Bueno";
			break;
	case 8:
	case 9: concepto="Distinguido";
			break;
	case 10: concepto="Sobresaliente";
			break;
	}
	
	
	
	if (promedio>=promocion){
		cout<<"El alumno promociono la materia"<<endl;
		cout<<"La nota es: "<<nota<<" Concepto: "<<concepto<<endl;
	}else if (promedio>=regular) {
		cout<<"El alumno regularizo la materia"<<endl;
	}else{
		cout<<"El alumno quedo libre"<<endl;
	}
	return 0;
}

