#include <iostream>
using namespace std;

float SumadorDeNotas(int a,int b);
void Lista(int dni, float notaFinal);
void MostrarNoAprobados(int cant);

int main(int argc, char *argv[]) {
	int cantAlumnos,i,pos,cont,DNI,noAprobados=0,alumnos[4][99];//0 para el dni, 1 para la nota del 1er semestre, 2 para la nota del 2do semestre y 3 para la nota final
	
	cout<<"Ingrese la cantidad de alumnos de la comision"<<endl;
	cin>>cantAlumnos;
	
	cont=0;
	cout<<"Ingrese el DNI del alumno"<<endl;
	cin>>alumnos[0][cont];
	cout<<"Ingrese la nota del 1er semestre del alumno"<<endl;
	cin>>alumnos[1][cont];
	cont++;
	//1er semestre
	while(cont<cantAlumnos){
		cout<<"Ingrese el DNI del alumno"<<endl;
		cin>>alumnos[0][cont];
		cout<<"Ingrese la nota del 1er semestre del alumno"<<endl;
		cin>>alumnos[1][cont];
		cont++;
	}
	
	//2do semestre
	cont=0;
	cout<<"Ingrese el DNI del alumno"<<endl;
	cin>>DNI;
	//buscador
	i=0;
	while(i<cantAlumnos){
		if(alumnos[0][i]==DNI){
			pos=i;
			i=cantAlumnos;
		}
		i++;
	}
	cout<<"Ingrese la nota del 2do trimestre"<<endl;
	cin>>alumnos[2][pos];
	cont++;
	while(cont<cantAlumnos){
		cout<<"Ingrese el DNI del alumno"<<endl;
		cin>>DNI;
		//buscador
		i=0;()
		while(i<cantAlumnos){
			if(alumnos[0][i]==DNI){
				pos=i;
				i=cantAlumnos;
			}
			i++;
		}
		cout<<"Ingrese la nota del 2do trimestre"<<endl;
		cin>>alumnos[2][pos];
		cont++;
	}
	
	//Un listado con los dni y la nota total de cada alumno (promedio entre el 1º y el 2º semestre)
	for(int j=0;j<cantAlumnos;j++){
		alumnos[3][j]=SumadorDeNotas(alumnos[1][j],alumnos[2][j]);
		if(alumnos[3][j]<6){
			noAprobados++;
		}
	}
	
	for(int j=0;j<cantAlumnos;j++){
		Lista(alumnos[0][j],alumnos[3][j]);
	}
	
	return 0;
}

//a) un listado con los dni y la nota total de cada alumno
float SumadorDeNotas(int a,int b){
	return (a+b)/2;
}
	
void Lista(int dni,float notaFinal){
	cout<<endl<<dni<<"  "<<notaFinal;
}

void MostrarNoAprobados(int cant){
	cout<<"la cantidad de alumnos que no aprobaron es: "<<cant<<endl;
}
