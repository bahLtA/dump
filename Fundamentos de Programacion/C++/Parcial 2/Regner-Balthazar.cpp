#include <iostream>
#include <string>
#include <tuple>
using namespace std;

int main(int argc, char *argv[]) {
	
	string patente[1550],pat,auxSt;
	int nroCarnet[1550],cantMultas[1550],cantAcarreos[1500],i,j,k,multa,dia,mes,cantPorMes[4][1550],aux,contMulta[5];
	bool encontrado;
	
	//Inicializa los contadores
	
	for (i=0;i<4;i++){
		for (k=0;k<1550;k++){
			cantPorMes[i][k]=0;
		}
	}
	for (i=0;i<5;i++){
		contMulta[i]=0;
	}
	
	//Ingresa los datos de la motos
	
	i=0;
	
	while (i<1550){
		cout<<"Ingrese la patente de la moto"<<endl;
		getline(cin,patente[i]);
		
		cout<<"Ingrese el numero de carnet del propietario"<<endl;
		cin>>nroCarnet[i];
		
		cout<<"Ingrese la cantidad de multas de la moto"<<endl;
		cin>>cantMultas[i];
		
		cout<<"Ingrese la cantidad de acarreos de la moto"<<endl;
		cin>>cantAcarreos[i];
		
		i++;
		
		cin.ignore();
	}
	
	//Ingreso de las multas
	
	cout<<"Ingrese la patente"<<endl;
	cin>>pat;
	i=0;
	
	while (pat!="x"){
		
		//Busca la patente
		encontrado=false;
		j=0;
		while (!encontrado && j<1550){
			if (pat==patente[j]){
				encontrado=true;
				j--; //Le resto 1 para que cuando salga del while, j guarde la posicion donde fue encontrada
			}
			j++;
		}
		//Ingresa el tipo de multa
		if (encontrado){
		cout<<"Ingrese el tipo de multa (1-5)"<<endl;
		cin>>multa;
		cantMultas[j]++;
		
		switch(multa){
		case 1: 
			contMulta[0]++;
			break;
		case 2:
			contMulta[1]++;
			break;
		case 3:
			contMulta[2]++;
			cantAcarreos[j]++;
			break;
		case 4:
			contMulta[3]++;
			cantAcarreos[j]++;
			break;
		case 5:
			contMulta[4]++;
			cantAcarreos[j]++;
			break;
		default:
			cout<<"Tipo de multa invalida, ingreselo de nuevo"<<endl;
			cantMultas[j]--;
			break;
		}
		
		cout<<"Ingrese el dia de la multa"<<endl;
		cin>>dia;
		cout<<"Ingrese el mes de la multa (1 para mayo, 2 para junio, 3 para julio y 4 para agosto)"<<endl;
		cin>>mes;
		
		if (multa==3 or multa==4 or multa==5){
			switch(mes){
			case 1: 
				cantPorMes[0][j]++;
				break;
			case 2:
				cantPorMes[1][j]++;
				break;
			case 3:
				cantPorMes[2][j]++;
				break;
			case 4:
				cantPorMes[3][j]++;
				break;
			}
		}
		
		i++;
		}else{
			cout<<"Patente no encontrada, ingresela nuevamente"<<endl<<endl;
		}
		cout<<"Ingrese la patente"<<endl;
		cin>>pat;
	}
	
	//Ordena el listado por cantidad de multas
	
	for (i=0;i<1550;i++){
		for (j=i+1;j<1550;j++){
			if (cantMultas[i]<cantMultas[j]){
				//Cambia la cantidad de multas
				aux=cantMultas[i];
				cantMultas[i]=cantMultas[j];
				cantMultas[j]=aux;
				//Cambia la patente
				auxSt=patente[i];
				patente[i]=patente[j];
				patente[j]=auxSt;
				//Cambia la cantidad de acarreos
				aux=cantAcarreos[i];
				cantAcarreos[i]=cantAcarreos[j];
				cantAcarreos[j]=aux;
				//Cambia la cantidad de acarreos por mes
				for (k=0;k<4;k++){
					aux=cantPorMes[k][i];
					cantPorMes[k][i]=cantPorMes[k][j];
					cantPorMes[k][j]=cantPorMes[k][i];
				}
			}
		}
	}
	
	//1) listado decreciente por cantidad de multas
	cout<<endl<<endl<<"PATENTE		CANT MULTAS		CANT ACARREOS"<<endl;
	for (i=0;i<1550;i++){
		cout<<patente[i]<<"		"<<cantMultas[i]<<"		"<<"	"<<cantAcarreos[i]<<endl;
	}
	
	//2)Listado por patente y por mes
	cout<<endl<<endl<<"PATENTE		MAYO  JUNIO  JULIO AGOSTO"<<endl;
	for (i=0;i<1550;i++){
		cout<<patente[i];
		for (j=0;j<4;j++){
			cout<<cantPorMes[j][i];
		}
		cout<<endl;
	}
	
	//3) Listado con totales segun tipo de multa
	
	cout<<endl<<endl<<"TIPO		TOTAL DE MULTAS"<<endl;
	cout<<"Exceso de velocidad		"<<contMulta[0]<<endl;
	cout<<"Documentacion vencida	"<<contMulta[1]<<endl;
	cout<<"Conducir sin licencia	"<<contMulta[2]<<endl;
	cout<<"Conducir sin casco		"<<contMulta[3]<<endl;
	cout<<"Conducir alcoholizado	"<<contMulta[4]<<endl;
	cout<<"TOTALES					"<<contMulta[0]+contMulta[1]+contMulta[2]+contMulta[3]<<contMulta[4];
	
	return 0;
}

