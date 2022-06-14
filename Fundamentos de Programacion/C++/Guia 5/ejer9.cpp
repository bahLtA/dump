#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int mat[3][3],fila;
	
	for (int i=0;i<3;i++){
		for (int c=0;c<3;c++){
			cout<<endl<<"Ingrese el valor de la posicion ("<<i+1<<','<<c+1<<')'<<endl;
			cin>>mat[i][c];
		}
	}
	
	cout<<"Ingrese la fila que quiere visualizar"<<endl;
	cin>>fila;
	fila--;
	cout<<endl;
	for (int i=0;i<3;i++){
		cout<<mat[fila][i]<<setw(5);
	}
	
	return 0;
}

