#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string pal1,pal2,pal3;
	
	cout<<"Ingrese una palabra"<<endl;
	getline(cin,pal1);
	
	cout<<"Ingrese otra palabra"<<endl;
	getline(cin,pal2);
	
	cout<<"Ingrese otra palabra"<<endl;
	getline(cin,pal3);
	
	if (pal1<pal2 && pal1<pal3){
		if (pal2<pal3){
			cout<<pal1<<", "<<pal2<<", "<<pal3<<endl;
		}else{
			cout<<pal1<<", "<<pal3<<", "<<pal2<<endl;
		}
	}else if (pal2<pal3){
		if (pal1<pal3){
			cout<<pal2<<", "<<pal1<<", "<<pal3<<endl;
		}else{
			cout<<pal2<<", "<<pal3<<", "<<pal1<<endl;
		}
	}else if(pal3<pal2){
		if (pal1<pal2){
			cout<<pal3<<", "<<pal1<<", "<<pal2<<endl;
		}else{
			cout<<pal3<<", "<<pal2<<", "<<pal1<<endl;
		}
	}
	
	
	return 0;
}

