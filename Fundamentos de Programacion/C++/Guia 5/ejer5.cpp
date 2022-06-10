#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,vec[999],i;
	
	cout<<"Ingrese N"<<endl;
	cin>>n;
	//solucion facil
//	for (int i=0;i<n;i++){
//		cout<<"Ingrese el valor del elemento "<<i+1<<endl;
//		cin>>vec[i];
//	}
	
	cout<<"Ingrese la posicion en el vector"<<endl;
	cin>>i;
	
	while (i!=0){
		cout<<"Ingrese el valor de la posicion "<<i<<endl;
		cin>>vec[i-1];
		
		cout<<"Ingrese la posicion en el vector (con 0 termina)"<<endl;
		cin>>i;
	}
	
	return 0;
}

