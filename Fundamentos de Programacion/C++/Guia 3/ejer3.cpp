#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,cont=1;
	cout<<"Ingrese un numero"<<endl;
	cin>>n;
	while (cont!=10){
		cont++;
		cout<<n*cont<<endl;
	}
	return 0;
}

