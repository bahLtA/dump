#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	string apodo,mas_preso;
	int preso_mas=0,cant,cont=0,cont1=0,cont2_4=0,cont5_10=0,contmas10=0;
	
	cout<<"Ingrese el apodo del barra"<<endl;
	cin.ignore();
	getline(cin,apodo);
	while(apodo!="ZZZ"){
		cout<<"Ingrese la cantidad de veces que estuvo preso"<<endl;
		cin>>cant;
		if (cant>preso_mas){
			preso_mas=cant;
			mas_preso=apodo;
		}
//		switch (cant){
//		case 1:	cont1++;
//				break;
//		case 2:
//		case 4: cont2_4++;
//				break;
//		case 5:
//		case 10: cont5_10++;
//				break;
//		default: contmas10++;
//				break;
//		}
		if (cant==1){
			cont1++;
		}
		if (cant>=2 && cant<=4){
			cont2_4++;
		}
		if (cant>=5 && cant<=10){
			cont5_10++;
		}
		if (cant>10){
			contmas10++;
		}
		
		cont++;
		cout<<"Ingrese otro apodo"<<endl;
		cin.ignore();
		getline(cin,apodo);
	}
	
	
	cout<<endl<<"Cantidad de Detenciones"<<setw(5)<<' '<<"Cantidad de integrantes"<<endl;
	cout<<"1"<<setw(27)<<' '<<cont1<<endl;
	cout<<"2-4"<<setw(27)<<' '<<cont2_4<<endl;
	cout<<"5 - 10"<<setw(27)<<' '<<cont5_10<<endl;
	cout<<"mas de 10"<<setw(27)<<' '<<contmas10<<endl;
	cout<<"Cantidad de integrantes encuestados: "<<cont;
	return 0;
}

