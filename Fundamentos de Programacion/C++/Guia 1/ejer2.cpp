#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float largo,alto,metros_cubicos;
	cout<<"Ingrese el alto de la pared"<<endl;
	cin>>alto;
	cout<<"Ingrese el largo de la pared"<<endl;
	cin>>largo;
	metros_cubicos=(alto*largo)/2;
	cout<<"Para hacer la pared se necesitan "<<metros_cubicos<<" metros cubicos de arena";
	return 0;
}

