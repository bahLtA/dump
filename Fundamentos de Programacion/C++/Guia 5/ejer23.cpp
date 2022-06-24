#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int arr[9999],n,i,al,cont[3],piv;//0 contador ppal, 1 para contador de agregados, 2 para contador de eliminados
	
	for (i=0;i<3;i++){
		cont[i]=0;
	}
	
	cout<<"Ingrese N"<<endl;
	cin>>n;
	
	for (i=0;i<n/2;i++){
		arr[i]=rand()%1000;
	}
	
	piv=n/2;
	
	while (cont[0]<n*10 && piv<n && piv>=0){
		al=rand()%1000;
		cont[0]++;
		if (al>arr[piv]){
			arr[piv+1]=al;
			piv++;
			cont[1]++;
		}else if(al<arr[piv]){
			arr[piv]=0;
			piv--;
			cont[2]++;
		}
	}
	
	cout<<"Cantidad inicial de elementos: "<<ceil(n/2)<<endl;
	cout<<"Cantidad de elementos: "<<cont[0]<<endl;
	cout<<"Cantidad de elementos agregados: "<<cont[1]<<endl;
	cout<<"Cantidad de elementos eliminados: "<<cont[2]<<endl;
	cout<<"Cantidad final de elementos: "<<piv+1<<endl;
	
	
	return 0;
}

