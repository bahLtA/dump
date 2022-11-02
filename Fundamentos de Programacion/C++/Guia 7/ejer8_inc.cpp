#include <iostream>
using namespace std;

void VerificarError(int &cod);
float CalculoRendimiento(int prod,int sup);
void PromedioRendimiento(float suma);

int main(int argc, char *argv[]) {
	
	int cod,codLocalidad[3][99],cantLocalidades[3],supCosechada[3][99],tonProd[3][99];
	float sumRendimiento=0,rendLocalidad[3][99];
	
	for(int j=0;j<3;j++){
		cout<<"Ingrese el codigo de la provincia"<<endl;
		cin>>cod;
		VerificarError(cod);
		
		cout<<"Ingrese la cantidad de localidades que producen arandanos"<<endl;
		cin>>cantLocalidades[cod-1];
		
		for(int i=0;i<cantLocalidades;i++){
			cout<<"Ingrese el codigo de la localidad"<<endl;
			cin>>codLocalidad[cod-1][i];
			cout<<"Ingrese la superficie cosechada en ha"<<endl;
			cin>>supCosechada[cod-1][i];
			cout<<"Ingrese la produccion en toneladas en el anio"<<endl;
			cin>>tonProd[cod-1][i];
			
			rendLocalidad[cod-1][i]=CalculoRendimiento(tonProd[cod-1][i],supCosechada[cod-1][i]);
			
			sumRendimiento+=rendLocalidad[cod-1][i];
		}
	}
	
	//a) El rendimiento en kg/ha de cada localidad
	for(int i=0;i<3;i++){
		for (int j=0;j<cantLocalidades[i].length;j++){
			
		}
	}
	
	
	
	return 0;
}

void VerificarError(int &cod){
	while(cod<1 || cod>3){
		cout<<"Codigo incorrecto, ingreselo nuevamente"<<endl;
		cin>>cod
	}
}

float CalculoRendimiento(int prod,int sup){
	return (prod/sup)*1000;
}
	
void PromedioRendimiento(float suma){
	cout<<"El promedio entre las tres provincias es de: "<<suma/3;
}
