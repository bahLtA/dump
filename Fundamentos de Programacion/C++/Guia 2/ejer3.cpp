#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre1,nombre2,nombre3;
	cout<<"Ingrese un nombre"<<endl;
	getline(cin,nombre1);
	cout<<"Ingrese otro nombre"<<endl;
	getline(cin,nombre2);
	cout<<"Ingrese otro nombre"<<endl;
	getline(cin,nombre3);
	cout<<endl;
	if (nombre1<nombre2 && nombre1<nombre3){
		if (nombre2<nombre3){
			cout<<nombre1<<", "<<nombre2<<", "<<nombre3;
		}else{
			cout<<nombre1<<", "<<nombre3<<", "<<nombre2;
		}
	}else if (nombre2<nombre3){
		if (nombre1<nombre3){
			cout<<nombre2<<", "<<nombre1<<", "<<nombre3;
		}else{
			cout<<nombre2<<", "<<nombre3<<", "<<nombre1;
		}
	}
	else if (nombre3<nombre2) {
		if (nombre1<nombre2){
			cout<<nombre3<<", "<<nombre1<<", "<<nombre2;
		}else{
			cout<<nombre3<<", "<<nombre2<<", "<<nombre1;
		}
	}
	return 0;
}

