#include <iostream>
using namespace std;

int Fibonacci(int n);

int main(int argc, char *argv[]) {
	
	int n;
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		cout<<Fibonacci(i)<<"  ";
	}
	
	return 0;
}

int Fibonacci(int n){
	if(n<2){
		return n;
	}
	return Fibonacci(n-1)+Fibonacci(n-2);
}

