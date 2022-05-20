#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int hh,mm,ss,horadet,segundostotales;
	cout<<"Ingrese la hora (En formato hhmmss)"<<endl;
	cin>>horadet;
	hh=horadet/10000;
	mm=(horadet/100)-(hh*100);
	ss=horadet-hh*10000-mm*100;
	cout<<"La hora es: "<<hh<<":"<<mm<<":"<<ss;
	segundostotales=hh*3600+mm*60+ss;
	cout<<"La cantidad de segundos en total es: "<<segundostotales;
	return 0;
}

