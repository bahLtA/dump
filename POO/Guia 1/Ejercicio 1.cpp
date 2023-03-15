#include <iostream>
#include <cmath>
using namespace std;

//a)Una funcion llamada division_entera() que devuelve el 
//cociente entero y el resto de la division de 2 enteros
void division_entera(int &cociente,int &resto,int a, int b);
//b) Calcular el factorial de un numero int;
int facto(int n);
//c) Devuelve la hipotenusa de un triangulo rectangulo
float hipot(float a,float b);
//d) Intercambia los contenidos de 2 parametros tipo char, modificando ambos
//parametros de llamada. No devuelve otro resultado
void intercambio(char &a,char &b);

int main(int argc, char *argv[]) {
	
	return 0;
}

void division_entera(int &cociente,int &resto, int a,int b){
	cociente=a/b;
	resto=a%b;
}

int facto(int n){
	int res=n;
	for(int i=n-1;i>1;i--){
		res*=i;
	}
	return res;
}

float hipot(float a,float b){
	float res;
	
	res=(a*a)+(b*b);
	res=sqrt(res);
	
	return res;
}
void intercambio(char &a,char &b){
	char aux;
	
	aux=a;
	a=b;
	b=aux;
}
