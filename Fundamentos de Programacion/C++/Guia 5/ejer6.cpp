#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre[100];
	
	for (int i=0;i<2;i++){
		cout<<"Ingrese la persona que adquirio el bono "<<i+1<<endl;
		getline(cin,nombre[i]);
	}
	
	cout<<"Nro Bono"<<setfill('.')<<setw(5);
	cout<<"Persona que adquirió el bono"<<endl;
	
	for(int i=0;i<100;i++){
		cout<<i+1<<setfill('.')<<setw(5);
		cout<<nombre[i]<<endl;
	}
	return 0;
}

