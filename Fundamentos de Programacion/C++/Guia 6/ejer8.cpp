#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,productor[4][999],mayorRendimiento=0,mayorProd,aux;//0 por el codigo de productor, 1 por la cant de hectareas sembradas, 2 por las toneladas totales y 3 por el rendimiento por hectarea
	
	
	cout<<"Ingrese la cantidad de productores censados"<<endl;
	cin>>n;
	
	for (int i=0;i<n;i++){
		cout<<"Ingrese el codigo de productor"<<endl;
		cin>>productor[0][i];
		cout<<"Ingrese la cantidad de hectareas sembradas en un año"<<endl;
		cin>>productor[1][i];
		cout<<"Ingrese el total de toneladas cosechadas en un año"<<endl;
		cin>>productor[2][i];
		
		productor[3][i]=productor[2][i]/productor[1][i];
		
		if (productor[3][i]>mayorRendimiento){
			mayorRendimiento=productor[3][i];
			mayorProd=i;
		}
	}
	
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (productor[1][i]<productor[1][j]){
				//Cambia el codigo de productor
				aux=productor[0][i];
				productor[0][i]=productor[0][j];
				productor[0][j]=aux;
				//Cambia la cantidad de hectareas sembradas
				aux=productor[1][i];
				productor[1][i]=productor[1][j];
				productor[1][j]=aux;
				//Cambia el total de toneladas cosechadas
				aux=productor[2][i];
				productor[2][i]=productor[2][j];
				productor[2][j]=aux;
				//Cambia el rendimiento de cada hectarea
				aux=productor[1][i];
				productor[3][i]=productor[3][j];
				productor[3][j]=aux;
			}
		}
	}
	
	cout<<"CODIGO PRODUCTOR    CANT HECTAREAS SEMBRADAS    CANT TOT TONELADAS COSECHADAS    RENDIMIENTO X HECTAREA"<<endl;
	for (int i=0;i<n;i++){
		cout<<productor[0][i]<<"    "<<productor[1][i]<<"    "<<productor[2][i]<<"    "<<productor[3][i]<<endl;
	}
	
	cout<<"El productor con mayor rendimiento por hectarea es el: "<<productor[0][mayorProd]<<" con "<<mayorRendimiento<<" Hectareas";
	
	return 0;
}

