#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string pal1,pal2,pal3;
	int n;
	
	cout<<"Ingrese una cadena de caracteres"<<endl;
	getline(cin,pal1);
	cout<<"Ingrese otra cadena de caracteres"<<endl;
	getline(cin,pal2);
	cout<<"Ingrese otra cadena de caraceters"<<endl;
	getline(cin,pal3);
	
	
	n=pal1.find(pal2);
	if (n!=-1){
		cout<<pal2<<" esta dentro de "<<pal1;
	}
	n=pal1.find(pal3);
	if (n!=-1){
		cout<<pal3<<" esta dentro de "<<pal1;
	}
	n=pal2.find(pal1);
	if (n!=-1){
		cout<<pal1<<" esta dentro de "<<pal2;
	}
	n=pal2.find(pal3);
	if (n!=-1){
		cout<<pal3<<" esta dentro de "<<pal2;
	}
	n=pal3.find(pal1);
	if (n!=-1){
		cout<<pal1<<" esta dentro de "<<pal3;
	}
	n=pal3.find(pal2);
	if (n!=-1){
		cout<<pal2<<" esta dentro de "<<pal3;
	}
	
	
	
	return 0;
}

