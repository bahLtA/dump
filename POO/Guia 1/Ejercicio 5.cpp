#include <iostream>
using namespace std;

void FormaLinea(int n,char c='#');

int main(int argc, char *argv[]) {
	
	int n;
	char c;
	
	FormaLinea(7,'-');
	cout<<endl;
	FormaLinea(10);
	
	
	return 0;
}

void FormaLinea(int n,char c){
	for(int i=0;i<n;i++){
		cout<<c;
	}
}

