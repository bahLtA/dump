#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	string texto,mat[99][99],texto_aux,descifrado="",palabra;
	int cont=0,cant_columnas,cant_filas,aux,fila,columna,pos=1;
	
	texto="Para crear un programa, y que la computadora lo interprete y ejecute, las instrucciones deben escribirse en un lenguaje de programación. En sus comienzos las computadoras interpretaban solo instrucciones en un lenguaje específico, del más bajo nivel, conocido como código máquina, siendo éste excesivamente complicado para programar. De hecho solo consiste en cadenas de números 1 y 0 (sistema binario). Para facilitar el trabajo de programación, los primeros científicos, que trabajaban en el área, decidieron reemplazar las instrucciones, secuencias de unos y ceros, por mnemónicos, que son abreviaturas...";
	texto_aux=texto;
	
	//Contador de palabras
	for (int i=0;i<texto.size();i++){
		if (texto[i]==' '){
			cont++;
		}
	}
	cont++;//Es +1 porque siempre hay una palabra mas que los espacios
	
	cout<<"Ingrese la cantidad de columnas"<<endl;
	cin>>cant_columnas;
	
	//Resuelve la cantidad de filas que va a tener la matriz
	cant_filas=cont/cant_columnas;
	
	//Se convierte el texto a la matriz
	for (int i=0;i<cant_filas;i++){
		for (int j=0;j<cant_columnas;j++){
			aux=texto_aux.find(" ");
			mat[i][j]=texto_aux.substr(0,aux);
			texto_aux.replace(0,aux+1,""); //Esta linea va borrando la primer palabra del texto auxiliar
		}
	}
	
	cout<<endl<<endl;
	
	//Muestra la matriz
	for (int i=0;i<cant_filas;i++){
		for (int j=0;j<cant_columnas;j++){
			cout<<mat[i][j]<<" 		| ";
		}
		cout<<endl;
	}
	
	cout<<endl<<endl<<"Ingrese la secuencia de cifrado: "<<endl<<endl;
	//Ingresa la secuencia de cifrado
	while (pos!=0){
		cout<<"Ingrese el numero de fila"<<endl;
		cin>>fila;
		cout<<"Ingrese el numero de columnas"<<endl;
		cin>>columna;
		cout<<"Ingrese la posicion dentro de la palabra"<<endl;
		cin>>pos;
		palabra=mat[fila-1][columna-1];
		if (pos<=palabra.size()){
			descifrado = descifrado + palabra[pos-1];
		}else{
			descifrado = descifrado + " ";
		}
		
	}
	
	
	cout<<"Mensaje descifrado: "<<descifrado;
	
	return 0;
}

