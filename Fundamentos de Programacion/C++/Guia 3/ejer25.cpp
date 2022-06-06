#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int comision,cant_alum,nota,cont=0,contaux,sum_nota=0;
	float prom,prom_total;
	cout<<"Ingrese el numero de la comision"<<endl;
	cin>>comision;
	while (comision!=999){
		cout<<"Ingrese la cantidad de alumnos"<<endl;
		cin>>cant_alum;
		contaux=0;
		while (contaux!=cant_alum){
			contaux++;
			cout<<"Ingrese la nota del alumno"<<contaux<<endl;
			cin>>nota;
		}
		prom=nota/cant_alum;
		cout<<endl<<"El promedio de la comision "<<comision<<" es de "<<prom<<endl<<endl;
		cont+=cant_alum;
		sum_nota+=nota;
		cout<<"Ingrese el numero de la comision (999 termina)"<<endl;
		cin>>comision;
	}
	prom_total=sum_nota/cont;
	cout<<"El promedio total es de "<<prom_total;
	
	return 0;
}

