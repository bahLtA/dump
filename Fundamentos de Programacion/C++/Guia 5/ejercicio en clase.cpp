#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	int n[100];
	for (int i=0; i<=99; i++){
		n[i]=rand()%(100+1);
		cout<<n[i]<<endl;
	}
	return 0;
}

