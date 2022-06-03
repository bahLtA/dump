#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int cont=0,n,aux=0;
	while (cont!=10){
		n=1+rand()%(10001-1);
		if (n>aux){
			cout<<n<<endl;
			aux=n;
			cont++;
		}
	}
	
	return 0;
}

