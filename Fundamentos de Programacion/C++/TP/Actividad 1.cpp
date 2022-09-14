#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	int arr[9999],n,azar,p,aux=0;
	int cont[3]; //0 es para cantidad de elementos agregados, 1 es para la cantidad de elementos eliminados, 2 es para contador general
	int pos[2];//0 es para la posicion minima, 1 es para la posicion maxima
	
	//Cambia la semilla de la funcion rand() para que genere numeros al azar
	srand(time(NULL));
	
	//Inicializa las posiciones maximas y minimas
	pos[0]=99999;
	pos[1]=0;
	
	cout<<"Ingrese N"<<endl;
	cin>>n;
	
	//Llena hasta la mitad con numeros al azar menor a 800
	for (int i=0;i<n/2;i++){
		arr[i]=rand()%800+1;
		cout<<arr[i]<<"    ";
		if (arr[i]==0){
			aux++;
		}
	}
	
	//Igualo el pivote para que este en la ultima posicion
	p=n/2;
	
	while(cont[2]!=n*10 && p!=n && p>0){
		azar=rand()%1000+1;
		
		if (azar==0){
			aux++;
		}
		
		if (azar>arr[p]){
			arr[p+1]=azar;
			cont[0]++;
			p++;
		}else{
			arr[p]=0;
			cont[1]++;
			p--;
		}
		
		//Posicion minima
		if (p<pos[0]){
			pos[0]=p;
		}
		//Posicion maxima
		if (p>pos[1]){
			pos[1]=p;
		}
		
		cont[2]++;
	}
	
	cout<<endl<<0<<"s:"<<aux<<endl;
	
	cout<<"Cantidad Inicial de elementos: "<<ceil(n/2)<<endl;
	cout<<"Cantidad de elementos agregados: "<<cont[0]<<endl;
	cout<<"Cantidad de elementos eliminados: "<<cont[1]<<endl;
	cout<<"Cantidad final de elementos: "<<cont[2]<<endl;
	cout<<"Posicion mínima: "<<pos[0]<<endl;
	cout<<"Posicion maxima: "<<pos[1]<<endl;
	
	
	
	
	
	
	return 0;
}

