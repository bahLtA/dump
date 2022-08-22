#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int DNI[25],doc,i;
	bool band=false;
	float NOTA[3][25],prom[25],sum;
	
	//Ingresa los DNIs
	for (int i=0;i<25;i++){
		cout<<"Ingrese el DNI del alumno "<<i+1;
		cin>>DNI[i];
	}
	
	//Ingresa las notas
	for (int i=0;i<3;i++){
		for (int j=0;j<25;j++){
			cout<<"Ingrese la nota del parcial "<<i<<", del alumno "<<j<<endl;
			cin>>NOTA[i][j];
		}
	}
	
	
	//Saca los promedios
	for (int i=0;i<25;i++){
		sum=0;
		for (int j=0;j<3;j++){
			sum+=NOTA[j][i];
		}
		prom[i]=sum/3;
	}
	
	cout<<"Ingrese el documento del alumno a buscar"<<endl;
	cin>>doc;
	i=0;
	while (!band && i<=25){
		if (DNI[i]==doc){
			band=true;
		}
		i++;
	}
	
	if (band){
		cout<<"El alumno con DNI: "<<doc<<" tiene un promedio de "<<prom[i-1];
	}else{
		cout<<"El alumno se la come";
	}
	return 0;
}

