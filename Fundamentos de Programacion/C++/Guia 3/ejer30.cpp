#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int cant_suc,cant_caj,cont=0,contaux,cont_falta=0;
	int	cant_1000,cant_500,cant_200,cant_100;
	int falt_1000,falt_500,falt_200,falt_100;
	int sum_1000=0,sum_500=0,sum_200=0,sum_100=0;
	string nombre;
	bool falta;
	
	int max_1000 = 1000;
	int max_500 = 2000;
	int max_200 = 5000;
	int max_100 = 5000;
	
	cout<<"Ingrese la cantidad de sucursales de banco"<<endl;
	cin>>cant_suc;
	
	while (cont!=cant_suc){
		cout<<"Ingrese el nombre de la sucursal"<<endl;
		cin.ignore();
		getline(cin,nombre);
		cout<<"Ingrese la cantidad de cajeros automaticos en dicha sucursal"<<endl;
		cin>>cant_caj;
		
		contaux=0;
		falt_1000=0;
		falt_500=0;
		falt_200=0;
		falt_100=0;
		
		while (contaux!=cant_caj){
			falta=false;
			cout<<"Ingrese la cantidad de billetes de $1000"<<endl;
			cin>>cant_1000;
			if (cant_1000<max_1000*0.1){
				falta=true;
				falt_1000+=max_1000-cant_1000;
			}
			cout<<"Ingrese la cantidad de billetes de $500"<<endl;
			cin>>cant_500;
			if (cant_500<max_500*0.1){
				falta=true;
				falt_500+=max_500-cant_500;
			}
			cout<<"Ingrese la cantidad de billetes de $200"<<endl;
			cin>>cant_200;
			if (cant_200<max_200*0.1){
				falta=true;
				falt_200+=max_200-cant_200;
			}
			cout<<"Ingrese la cantidad de billetes de $100"<<endl;
			cin>>cant_100;
			if (cant_100<max_100*0.1){
				falta=true;
				falt_100+=max_100-cant_100;
			}
			
			if (falta){
				cont_falta++;
			}
			
			contaux++;
		}
		
		cout<<"Sucursal: "<<nombre<<endl;
		cout<<"Faltan "<<falt_1000<<" billetes de $1000"<<endl;
		cout<<"Faltan "<<falt_500<<" billetes de $500"<<endl;
		cout<<"Faltan "<<falt_200<<" billetes de $200"<<endl;
		cout<<"Faltan "<<falt_100<<" billetes de $100"<<endl;
		
		sum_1000+=falt_1000;
		sum_500+=falt_500;
		sum_200+=falt_200;
		sum_100+=falt_100;
		
		cont++;
	}
	
	cout<<"Cajeros con faltante: "<<cont_falta<<endl;
	cout<<"Hay que reponer: "<<endl;
	cout<<sum_1000<<" billetes de $1000"<<endl;
	cout<<sum_500<<" billetes de $500"<<endl;
	cout<<sum_200<<" billetes de $200"<<endl;
	cout<<sum_100<<" billetes de $100"<<endl;
	
	return 0;
}

