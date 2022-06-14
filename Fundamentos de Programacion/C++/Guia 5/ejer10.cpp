#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int mat[4][4],i,j,aux;
	
	for(int f=0;f<4;f++){
		for(int c=0;c<4;c++){
			cout<<"Ingrese un valor para la posicion ("<<f+1<<','<<c+1<<')'<<endl;
			cin>>mat[f][c];
		}
	}
	
	for(int f=0;f<4;f++){
		for (int c=0;c<4;c++){
			cout<<setw(5)<<mat[f][c];
		}
		cout<<endl;
	}
	
	cout<<"Ingrese la fila i"<<endl;
	cin>>i;
	cout<<"Ingrese la fila j"<<endl;
	cin>>j;
	i--;
	j--;
	
	for (int c=0;c<4;c++){
		aux=mat[i][c];
		mat[i][c]=mat[j][c];
		mat[j][c]=aux;
	}
	
	for(int f=0;f<4;f++){
		for (int c=0;c<4;c++){
			cout<<setw(5)<<mat[f][c];
		}
		cout<<endl;
	}
	
	return 0;
}

