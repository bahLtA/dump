#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c,y,x;
	cout<<"Ingrese A"<<endl;
	cin>>a;
	cout<<"Ingrese B"<<endl;
	cin>>b;
	cout<<"Ingrese C"<<endl;
	cin>>c;
	x=a;
	while(x<=b){
		y=(a*x*x)+(b*x)+c;
		cout<<"("<<x<<";"<<y<<")"<<endl;
		x++;
	}
	return 0;
}

