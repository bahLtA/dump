#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string nya,materia;
	int cant_aprobadas,cont,cont_ingles=0,nota,cont_mas_10=0,sum_por_alumno,cant_alumnos=0;
	
	cout<<"Ingrese el nombre y apellido del alumno"<<endl;
	getline(cin,nya);
	while (nya!="ZZZ"){
		cout<<"Ingrese la cantidad de materias aprobadas"<<endl;
		cin>>cant_aprobadas;
		cont=0;
		sum_por_alumno=0;
		if (cant_aprobadas>10){
			cont_mas_10++;
		}
		while (cant_aprobadas!=cont){
			cout<<"Ingrese el nombre de la materia"<<endl;
			cin.ignore();
			getline(cin,materia);
			if (materia=="INGLES"){
				cont_ingles++;
			}
			cout<<"Ingrese la nota obtenida en "<<materia<<endl;
			cin>>nota;
			sum_por_alumno+=nota;
			cont++;
		}
		cant_alumnos++;
		cout<<"El promedio de "<<nya<<" fue: "<<sum_por_alumno/cant_aprobadas<<endl<<endl;
		cout<<"Ingrese el nombre y apellido del alumno"<<endl;
		cin.ignore();
		getline(cin,nya);
	}
	cout<<"Alumnos que aprobaron mas de 10: "<<cont_mas_10<<endl;
	cout<<"Porcentaje que aprobaron Ingles: "<<(cont_ingles*cant_alumnos)/100<<endl;
	return 0;
}

