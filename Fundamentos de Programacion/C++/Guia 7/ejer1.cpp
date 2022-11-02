#include <iostream>
#include <cmath>
using namespace std;

float Hipot(float a, float b); //a) Hipotenusa
int Facto(int n); //b) Factorial
void DivisionEntera(int divisor,int dividendo,int &coc, int &res); //c) Division Entera
void Intercambio(char &a,char &b);//d) Intercambio()

int main(int argc, char *argv[]) {
	
	
	return 0;
}

float Hipot(float a, float b){
	float resultado;
	
	resultado = (a*a)+(b*b);
	resultado = sqrt(resultado);
	
	return resultado;
}
	
int Facto(int n){
	int res=n;
	
	for(int i=n-1;i>1;i--){
		res*=i;
	}
	
	return res;
}

void DivisionEntera(int divisor,int dividendo,int &coc,int &res){
	coc=divisor/dividendo;
	res=divisor%dividendo;
}

void Intercambio(char &a,char &b){
	char aux;
	
	aux=a;
	a=b;
	b=aux;
}
	
	
