#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1,n2;
	cout<<"Ingrese un numero"<<endl;
	cin>>n1;
	cout<<"Ingrese otro numero"<<endl;
	cin>>n2;
	if (n1<n2){
		cout<<n1<<", "<<n2;
	}else{
		cout<<n2<<", "<<n1;
	}
	return 0;
}

