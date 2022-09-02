#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	bool band;
	int n,doc,i,j,contDesaprobados=0,contAprob=0;
	int DNI[999];
	float nota,aux,notas[3][999]; //0 para la nota del primer semestre, 1 para la del segundo semestre y 2 para el promedio
	float aprobados[2][999]; //0 para el dni, 1 para la nota final
	setprecision(2);
	
	cout<<"Ingrese la cantidad de alumnos"<<endl;
	cin>>n;
	
	//Ingresa los DNIs y las notas del 1er cuatrimestre
	for (i=0;i<n;i++){
		cout<<"Ingrese el DNI del alumno "<<i+1<<endl;
		cin>>DNI[i];
		cout<<"Ingrese la nota del primer cuatrimestre"<<endl;
		cin>>notas[0][i];
	}
	
	i=0;
	
	//Ingresa un DNI, lo busca y luego ingresa la nota en ese arreglo
	while(i<n){
		cout<<"Ingrese el DNI del alumno"<<endl;
		cin>>doc;
		cout<<"Ingrese la nota del segundo cuatrimestre"<<endl;
		cin>>nota;
		
		j=0;
		band=false;
		
		while(j<n){
			if (DNI[j]==doc){
				band=true;
				notas[1][j]=nota;
				j=n;
			}
			j++;
		}
		if (!band){
			cout<<"No se encontro el DNI, ingresar nuevamente"<<endl;
			i--;
		}
		
		i++;
	}
	
	//Saca los promedios
	for (i=0;i<n;i++){
		notas[2][i]=(notas[0][i]+notas[1][i])/2;
		//Contador de desaprobados
		if (notas[2][i]<6){
			contDesaprobados++;
		}else{
			contAprob++;
			aprobados[0][i]=DNI[i];
			aprobados[1][i]=notas[2][i];
		}
	}
	
	//a) Listado con los DNI y la nota total de cada uno
	cout<<"DNI    NOTA FINAL"<<endl;
	
	for (i=0;i<n;i++){
		cout<<DNI[i]<<"    "<<notas[2][i]<<endl;
	}
	
	//b) alumnos desaprobados
	cout<<contDesaprobados<<" alumnos desaprobaron"<<endl;
	
	//c) listado ordenado de mayor a menor por nota final de los que aprobaron
	i=0;
	//ordenamiento de la lista de aprobados
	while(i<contAprob){
		for (j=i+1;j<contAprob;j++){
			if (aprobados[1][i]<aprobados[1][j]){
				aux=aprobados[1][i];
				aprobados[1][i]=aprobados[1][j];
				aprobados[1][j]=aux;
			}
		}
		i++;
	}
	
	//Muestra de la lista de aprobados
	cout<<"DNI    NOTA FINAL"<<endl;
	for (i=0;i<contAprob;i++){
		cout<<aprobados[0][i]<<"    "<<aprobados[1][i]<<endl;
	}
	
	return 0;
}

