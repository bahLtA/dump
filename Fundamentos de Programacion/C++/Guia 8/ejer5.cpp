#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	ofstream archivo;
	string provincia;
	
	archivo.open("./PROVINCIAS.txt");
	
	
	
	for (int i=0;i<24;i++){
		cout<<"Ingrese la provincia"<<endl;
		getline(cin,provincia);
		
		archivo<<i<<" "<<provincia<<endl;
		
	}
	
	archivo.close();
	return 0;
}

