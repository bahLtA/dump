#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int n, mat[99][99],fila,columna,cont=0,mat_cont[99][99];
	
	cout<<"Ingrese N"<<endl;
	cin>>n;
	cout<<endl;
	
	for (int f=0;f<n;f++){
		for (int c=0;c<n;c++){
			mat[f][c]=0;
			mat_cont[f][c]=0;
		}
	}
	
	while (cont!=n*n){
		fila=rand()%n;
		columna=rand()%n;
		
		if (mat[fila][columna]==0){
			mat[fila][columna]=rand()%100;
			cont++;
		}
		mat_cont[fila][columna]++;
	}
	
	for (int f=0;f<n;f++){
		for (int c=0;c<n;c++){
			cout<<setw(5)<<mat[f][c];
		}
		cout<<endl;
	}
	
	cout<<endl<<"Contador de veces que se genero en cada celda y fila"<<endl<<endl;
	
	for (int f=0;f<n;f++){
		for (int c=0;c<n;c++){
			cout<<setw(5)<<mat_cont[f][c];
		}
		cout<<endl;
	}
	
	
	
	
	
	return 0;
}

