#include <iostream>
using namespace std;

int H(int x){
	int res;
	
	if(x<4){
		res=4*x;
	}else if(x>=4){
		res=3*(H(x-2))+1;
	}
	
	return res;
}

int main(int argc, char *argv[]) {
	
	
	
	
	cout<<"Resultados: "<<endl;
	cout<<"H(7): "<<H(7)<<endl;
	cout<<"H(5): "<<H(5)<<endl;
	cout<<"H(12): "<<H(12)<<endl;
	return 0;
}

