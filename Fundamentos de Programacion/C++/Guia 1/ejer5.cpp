#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int presupuesto;
	float pres_gin,pres_trau,pres_ped;
	
	cout<<"Ingrese el presupuesto del hospital"<<endl;
	cin>>presupuesto;
	pres_gin=presupuesto*0.4;
	pres_ped=presupuesto*0.3;
	pres_trau=presupuesto*0.3;
	cout<<"Ginecologia recibira: $"<<pres_gin<<endl;
	cout<<"Traumatologia recibira: $"<<pres_trau<<endl;
	cout<<"Pediatria recibira: $"<<pres_ped<<endl;
	return 0;
}

