#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float peso,estatura,IMC;
	cout<<"Ingrese el peso (en kgs)"<<endl;
	cin>>peso;
	cout<<"Ingrese la estatura (en metros)"<<endl;
	cin>>estatura;
	IMC=peso/(estatura*estatura);
	
	if (IMC<18.5){
		cout<<"IMC debajo de lo normal "<<IMC;
	}else if (IMC<25){
		cout<<"IMC Normal "<<IMC;
	}else if (IMC<30){
		cout<<"IMC Sobrepeso "<<IMC;
	}else{
		cout<<"IMC Obesidad "<<IMC;
	}
	return 0;
}

