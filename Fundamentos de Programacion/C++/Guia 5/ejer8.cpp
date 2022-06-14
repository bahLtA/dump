#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int vec[9999],n,c,cont=0,ant=0,x;
	
	cout<<"Ingrese N"<<endl;
	cin>>n;
	
	cout<<"Ingrese C"<<endl;
	cin>>c;
	
	while(cont!=n){
		x=rand()%c+1;
		
		if (x>ant){
			ant=x;
			vec[cont]=x;
			cont++;
		}
	};
	cout<<endl<<endl;
	for (int i=0;i<n;i++){
		cout<<vec[i]<<endl;
	}
	return 0;
}

