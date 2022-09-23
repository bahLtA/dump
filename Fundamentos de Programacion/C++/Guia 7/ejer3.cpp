#include <iostream>
#include <string>
using namespace std;

void formaLinea(int n,char c='#');

int main(int argc, char *argv[]) {
	
	formaLinea(7,'-');
	formaLinea(10);
	
	return 0;
}

void formaLinea(int n,char c){
	string linea="";
	
	for (int i=0;i<n;i++){
		linea+=c;
	}
	cout<<linea<<endl;
}

