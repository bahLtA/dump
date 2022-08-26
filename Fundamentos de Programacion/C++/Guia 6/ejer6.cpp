#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int dni[999],i=0;
	float nota[3][999],prom[999],sum,aux;
	
	setprecision(2);
	
	cout<<"Ingrese el DNI del alumno 1"<<endl;
	cin>>dni[0];
	
	while(dni[i]!=99){
		//Ingresa las notas del alumno i
		sum=0;
		for (int j=0;j<3;j++){
			cout<<"Ingrese la nota del alumno "<<i+1<<" en el parcial "<<j+1<<endl;
			cin>>nota[j][i];
			sum=nota[j][i];
		}
		
		//Hace el promedio del alumno actual
		prom[i]=sum/3;
		
		i++;
		cout<<"Ingrese el DNI del alumno "<<i+1<<endl;
		cin>>dni[i];
	}
	
	for (int c=0;c<i;c++){
		for (int k=c+1;k<i;k++){
			if (prom[c]<prom[k]){
				aux=prom[c];
				prom[c]=prom[k];
				prom[k]=aux;
				//Mueve el dni
				aux=dni[c];
				dni[c]=dni[k];
				dni[k]=aux;
				//Mueve las notas
				for (int j=0;j<3;j++){
					aux=nota[j][c];
					nota[j][c]=nota[j][k];
					nota[j][k]=aux;
				}
			}
		}
	}
	
	cout<<"DOCUMENTO  NOTA 1  NOTA 2  NOTA 3  PROMEDIO"<<endl;
	for (int j=0;j<i;j++){
		cout<<dni[j]<<"  "<<nota[0][j]<<"  "<<nota[1][j]<<"  "<<nota[2][j]<<"  "<<prom[j]<<endl;
	}
	return 0;
}

