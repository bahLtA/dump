#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad[100],cant,verif;
	
	
	cout<<"Ingrese la cantidad de alumnos que tiene la comision"<<endl;
	cin>>cant;
	
	for (int i=0;i<cant;i++){
		cout<<"Ingrese la edad del alumno "<<i+1<<endl;
		cin>>edad[i];
	}
	
	int 
	cout<<"Ingrese el numero de alumno que quiere verificar la edad"<<endl;
	cin>>verif;
	while (verif>0 && verif<=cant){
		cout<<edad[verif]<<endl;
		
		cout<<endl<<"Ingrese el numero de alumno que quiere verificar la edad"<<endl;
		cin>>verif;
	}
	
	return 0;
}

