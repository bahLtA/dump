#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int n,m,mat[200][200],cont=0;
	
	cout<<"Ingrese N"<<endl;
	cin>>n;
	cout<<"Ingrese M"<<endl;
	cin>>m;
	
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			mat[j][i]=rand()%100+1;
		}
	}

	for(int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if (mat[j][i]==mat[j+1][i]-1){
				cont++;
			}
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cout<<setw(4)<<mat[j][i];
		}
		cout<<endl;
	}
	
	cout<<cont;
	
	
	
	return 0;
}

