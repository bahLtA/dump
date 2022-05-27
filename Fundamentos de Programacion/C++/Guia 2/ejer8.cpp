#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int anio;
	cout<<"Ingrese un año"<<endl;
	cin>>anio;
	if (anio%4==0 && anio%100!=0){
		cout<<"Año bisiesto";
	}else if(anio%400==0){
		cout<<"Año bisiesto";
	}else{
		cout<<"Año no bisiesto";
	}
	return 0;
}

