#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int AcortaFechas(int fecha);

int main(int argc, char *argv[]) {
	ifstream datosPersonales;
	ifstream docentesCatedras;
	ofstream catedrasConcurso;
	
	int dniDocentes[9999],fechaNac[9999],fechaIng[9999],anioNac[9999],anioIng[9999],cont,fecha,anio,contJub=0,dniDocJub[50],dni[500],contLibre=0;
	string nombres[9999],catedraLibre[50],funcionLibre[50],cargoLibre[50],catedra[500],funcion[500],cargo[500];
	
	datosPersonales.open("./datos_personales.txt");
	docentesCatedras.open("./docentes_catedras.txt");
	catedrasConcurso.open("./catedras_concurso.txt");
	
	cout<<"Ingrese el anio a considerar"<<endl;
	cin>>anio;
	
	if(datosPersonales.fail() || docentesCatedras.fail() || catedrasConcurso.fail()){
		cout<<"Error";
	}else{
		//ejercicio 1
		cont=0;
		while(!datosPersonales.eof()){
			
			datosPersonales>>dniDocentes[cont];
			
			datosPersonales.ignore();
			getline(datosPersonales,nombres[cont]);
			
			datosPersonales>>fechaNac[cont];
			
			datosPersonales>>fechaIng[cont];
			
			
			cont++;
		}
		
		cout<<"DNI    Apellido y nombre     anio de ingreso"<<endl;
		cont--;
		for(int i=0;i<cont;i++){
			fecha=fechaNac[i];
			anioNac[i]=AcortaFechas(fecha);
			fecha=fechaIng[i];
			anioIng[i]=AcortaFechas(fecha); //Esto lo hago para que no se pierdan los datos de las fechas y se guarden los años en una variable aparte
			if((anio-anioIng[i])>=25 && (anio-anioNac[i])>=52){
				cout<<dniDocentes[i]<<"  "<<nombres[i]<<"  "<<anioIng[i]<<endl;
				dniDocJub[contJub] = dniDocentes[i];
				contJub++;
			}
		}
		
		//Ejercicio 2
		
		cont=0;
		while(!docentesCatedras.eof()){
			docentesCatedras>>dni[cont];
			
			docentesCatedras.ignore();
			getline(docentesCatedras,catedra[cont]);
			
			getline(docentesCatedras,funcion[cont]);
			
			getline(docentesCatedras,cargo[cont]);
			
		    cont++;
		}
		for(int j=0;j<cont;j++){
			for(int i=0;i<contJub;i++){
				if(dniDocJub[contLibre] == dni[j]){
					catedraLibre[contLibre] = catedra[j];
					funcionLibre[contLibre] = funcion[j];
					cargoLibre[contLibre] = cargo[j];
					contLibre++;
				}
			}
		}
		
		for (int i=0;i<contJub;i++){
			catedrasConcurso<<catedraLibre[i]<<"  "<<funcionLibre[i]<<"  "<<cargoLibre[i]<<endl;
		}
		
		
	}
	
	
	datosPersonales.close();
	docentesCatedras.close();
	catedrasConcurso.close();
	return 0;
}

int AcortaFechas(int fecha){
	fecha = fecha /10000;
	return fecha;
}
