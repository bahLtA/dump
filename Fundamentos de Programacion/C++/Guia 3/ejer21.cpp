#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int obra,costo,sum1=0,sum2=0,sum3=0,sum4=0,contL=0,contP=0;
	char material;
	int costomax=0,obramax;
	
	cout<<"Ingrese el codigo de obra"<<endl;
	cin>>obra;
	while (obra!=9){
		cout<<"Ingrese el tipo de material retirado"<<endl;
		cin>>material;
		cout<<"Ingrese el costo del material retirado"<<endl;
		cin>>costo;
		
		if (material=='L'){
			contL++;
		}
		
		if (costo>costomax){
			costomax=costo;
			obramax=obra;
		}
		
		switch (obra){
		case 1: sum1+=costo;
		break;
		case 2: sum2+=costo;
		break;
		case 3: sum3+=costo;
		break;
		case 4: sum4+=costo;
		break;
		}
		contP++;
		
		cout<<"Ingrese el codigo de la obra"<<endl;
		cin>>obra;
	}
	
	cout<<endl<<"El costo total de la obra 1 fue: $"<<sum1<<endl;
	cout<<"El costo total de la obra 2 fue: $"<<sum2<<endl;
	cout<<"El costo total de la obra 3 fue: $"<<sum3<<endl;
	cout<<"El costo total de la obra 4 fue: $"<<sum4<<endl;
	cout<<"El porcentaje de pedidos de ladrillos fue: %"<<(contL*contP)/100<<endl;
	cout<<"La obra que realizo el pedido de mayor costo es: "<<obramax<<endl;
	
	
	return 0;
}

