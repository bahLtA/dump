#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int anio;
	cout<<"Ingrese un a�o"<<endl;
	cin>>anio;
	if (anio%4==0 && anio%100!=0){
		cout<<"A�o bisiesto";
	}else if(anio%400==0){
		cout<<"A�o bisiesto";
	}else{
		cout<<"A�o no bisiesto";
	}
	return 0;
}

