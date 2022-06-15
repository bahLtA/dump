#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int mm_llovidos[99],lluvia_max=0,cont_lluvia[6],cont=0;
	string ciudad[99],ciudad_max;
	
	cout<<"Ingrese la cantidad de milimetros de la lluvia "<<cont<<endl;
	cin>>mm_llovidos[cont];
	
	while(mm_llovidos[cont]!=0){
		cout<<"Ingrese la ciudad de la lluvia"<<endl;
		cin.ignore();
		getline(cin,ciudad[cont]);
		
		if(mm_llovidos[cont]>=0 && mm_llovidos[cont]<100){
			cont_lluvia[0]++;
		}else if (mm_llovidos[cont]>=100 && mm_llovidos[cont]<200){
			cont_lluvia[1]++;
		}else if (mm_llovidos[cont]>=200 && mm_llovidos[cont]<300){
			cont_lluvia[2]++;
		}else if (mm_llovidos[cont]>=300 && mm_llovidos[cont]<400){
			cont_lluvia[3]++;
		}else if (mm_llovidos[cont]>=400 && mm_llovidos[cont]<500){
			cont_lluvia[4]++;
		}else if (mm_llovidos[cont]>=500){
			cont_lluvia[5]++;
		}
		if (lluvia_max<mm_llovidos[cont]){
			lluvia_max=mm_llovidos[cont];
			ciudad_max=ciudad[cont];
		}
		cont++;
		
		cout<<"Ingrese la cantidad de milimetros de la lluvia "<<cont<<endl;
		cin>>mm_llovidos[cont];
	}
	
	
	cout<<"Se contabilizaron "<<cont<<" lluvias"<<endl;
	cout<<"La maxima cantidad llovida es de "<<lluvia_max<<" mm, en la ciudad "<<ciudad_max<<endl;
	return 0;
}

