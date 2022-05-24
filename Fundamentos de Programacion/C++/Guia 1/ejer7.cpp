#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int xa,ya,xb,yb,xc,yc;
	float ab,bc,ca;
	float avion;
	
	cout<<"Ingrese la coordenada X del aeropuerto A"<<endl;
	cin>>xa;
	cout<<"Ingrese la coordenada Y del aeropuerto A"<<endl;
	cin>>ya;
	cout<<"Ingrese la coordenada X del aeropuerto B"<<endl;
	cin>>xb;
	cout<<"Ingrese la coordenada Y del aeropuerto B"<<endl;
	cin>>yb;
	cout<<"Ingrese la coordenada X del aeropuerto C"<<endl;
	cin>>xc;
	cout<<"Ingrese la coordenada Y del aeropuerto C"<<endl;
	cin>>yc;
	
	ab=sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
	bc=sqrt((xc-xb)*(xc-xb)+(yc-yb)*(yc-yb));
	ca=sqrt((xa-xc)*(xa-xc)+(ya-yc)*(ya-yc));
	
	avion=ab+bc+ca;
	
	cout<<"La distancia entre A y B es: "<<ab<<endl;
	cout<<"La distancia entre B y C es: "<<bc<<endl;
	cout<<"La distancia entre C y A es: "<<ca<<endl<<endl;
	
	cout<<"El avion recorre "<<avion;
	
	return 0;
}

