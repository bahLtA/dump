#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string mensaje,encriptado="";
	int largo,aux,p=0;
	char mat[99][99];
	
	cout<<"Ingrese el mensaje a codificar"<<endl;
	getline(cin,mensaje);
	
	//Sacamos el largo del mensaje para luego convertirlo a matriz
	largo=mensaje.size();
	aux=ceil(sqrt(largo));
	
	for (int i=0;i<aux;i++){
		for (int j=0;j<aux;j++){
			if (p<largo){
				mat[i][j]=mensaje[p];
				p++;
				
			}
		}
	}
	
	//Muestra la matriz sin encriptar
	for (int i=0;i<aux;i++){
		for (int j=0;j<aux;j++){
			cout<<mat[i][j]<<" | ";
		}
		cout<<endl;
	}
	
	cout<<endl<<endl;
	
	//Muestra la matriz encriptada
	for (int i=0;i<aux;i++){
		for (int j=0;j<aux;j++){
			cout<<mat[j][i]<<" | ";
			//Va formulando el mensaje encriptado
			encriptado= encriptado + mat[j][i];
		}
		cout<<endl;
	}
	
	cout<<endl<<"Mensaje encriptado: "<<encriptado;

	return 0;
}

