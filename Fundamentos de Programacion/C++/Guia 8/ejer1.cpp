#include <iostream>
#include <fstream>
using namespace std;

int FuncionCuadratica(int x,int a,int b,int c);

int main(int argc, char *argv[]) {
	ofstream texto;
	
	texto.open("./ejer1.txt");
	int a,b,c;
	
	cout<<"Ingrese a"<<endl;
	cin>>a;
	cout<<"Ingrese b"<<endl;
	cin>>b;
	cout<<"Ingrese c"<<endl;
	cin>>c;
	texto.clear();
	for(int i=0;i<1001;i++){
		texto<<i<<"  "<<FuncionCuadratica(i,a,b,c)<<"\n";
	}
	texto.close();
	
	return 0;
}

int FuncionCuadratica(int x,int a,int b,int c){
	int y;
	
	y = (a*x*x)+b*x+c;
	
	return y;
}
