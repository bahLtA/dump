#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int precio_nafta,precio_multa[10],dia,ant,cont;
	int carnet[31][100],monto[31][100],multa[31][100],total_dia[31],total_mes=0;
	string nya[31][100];
	
	//Inicializa la suma de $ de los dias en 0
	for (int i=0;i<31;i++){
		total_dia[i]=0;
	}
	
	cout<<"Ingrese el precio del litro de nafta super"<<endl;
	cin>>precio_nafta;
	
	//Lee lo que cobra cada tipo de multa
	for (int i=0;i<10;i++){
		cout<<"Ingrese cuantos litros de nafta sale la multa "<<i+1<<endl;
		cin>>precio_multa[i];
	}
	
	cout<<"Ingrese el dia"<<endl;
	cin>>dia;
	
	while (dia!=99){
		ant=dia;
		cont=0;
		
		while (ant==dia){
			cout<<"Ingrese el numero del carnet del conductor"<<endl;
			cin>>carnet[dia-1][cont];
			cin.ignore();
			cout<<"Ingrese nombre y apellido"<<endl;
			getline(cin,nya[dia-1][cont]);
			cout<<"Ingrese el tipo de multa"<<endl;
			cin>>multa[dia-1][cont];
			
			monto[dia-1][cont]=precio_multa[multa[dia-1][cont]]*precio_nafta;
			
			cont++;
			cout<<"Ingrese el dia"<<endl;
			cin>>dia;
		}
		cout<<"DIA"<<setw(10)<<"NOMBRE Y APELLIDO"<<setw(30)<<"CARNET"<<setw(10)<<"TIPO"<<setw(10)<<"MONTO"<<setw(10)<<endl;
		for (int i=0;i<cont;i++){
			cout<<ant<<setw(10)<<nya[ant-1][i]<<setw(30)<<carnet[ant-1][i]<<setw(10)<<multa[ant-1][i]<<setw(10)<<monto[ant-1][i]<<setw(10)<<endl;
		}
		//Esto suma todos los montos a la suma del dia
		for (int i=0;i<cont; i++){
			total_dia[ant-1]+=monto[ant-1][i];
		}
		cout<<".................."<<endl;
		cout<<"TOTAL DEL DIA "<<ant<<": $"<<total_dia[ant-1]<<endl;
	}
	
	//Esto suma todos los dias
	for (int i=0;i<31;i++){
		total_mes+=total_dia[i];
	}
	cout<<"TOTAL DEL MES: $"<<total_mes<<endl;
	return 0;
}

