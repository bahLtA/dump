#include <iostream>
using namespace std;

void formaLinea(int n,char c='#');

int main(int argc, char *argv[]) {
	
	formaLinea(7,'-');
	formaLinea(10);
	
	return 0;
}

void formaLinea(int n,char c){
	for(int i=0;i<n;i++){
		cout<<c;
	}
	cout<<endl;
	
}
