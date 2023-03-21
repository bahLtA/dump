#include <iostream>
using namespace std;

void EsVocal(char c){
	if(c!='a' || c!='e' || c!='i' || c!='o' || c!='u'){
		cout<<"La letra es una vocal";
	}else{
		cout<<"La letra es una consonante";
	}
}

int main(int argc, char *argv[]) {
	
	char c;
	
	cout<<"Ingrese una letra"<<endl;
	cin>>c;
	
	EsVocal(c);
	
	return 0;
}

