#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	string palabras[999],cad;
	int mat[999][4],n;
	char x;
	
	
	cout<<"Ingrese N"<<endl;
	cin>>n;
	
	for (int i=0;i<n;i++){
		cin.ignore();
		cout<<"Ingrese una palabra"<<endl;
		getline(cin,palabras[i]);
	}
	
	for (int i=0;i<n;i++){
		mat[i][0]=palabras[i].size();
		cad=palabras[i];
		for (int j=0;j<(mat[i][0]);j++){
			x=cad[j];
			switch (x) {
			case 65:					//A
			case 69:					//E
			case 73:					//I
			case 79:	  				//O
			case 85:					//U
			case 97:					//a
			case 101:					//e
			case 105:					//i
			case 111:					//o
			case 117: mat [i][2]++;		//u
			break;
			case 66:
			case 67:
			case 68:
			case 70:
			case 71:
			case 72:
			case 74:
			case 75:
			case 76:
			case 77:
			case 78:
			case 80:
			case 81:
			case 82:
			case 83:
			case 84:
			case 86:
			case 87:
			case 88:
			case 89:
			case 90:
			case 98:
			case 99:
			case 100:
			case 102:
			case 103:
			case 104:
			case 106:
			case 107:
			case 108:
			case 109:
			case 110:
			case 112:
			case 113:
			case 114:
			case 115:
			case 116:
			case 118:
			case 119:
			case 120:
			case 121:
			case 122: mat[i][1]++;
			break;
			default: mat[i][3]++;
			break;
			};
		}
		
	}
	
	cout<<"Palabra"<<setw(10)<<"Largo"<<setw(10)<<"Consonantes"<<setw(12)<<"Vocales"<<setw(8)<<"Otros Caracteres"<<endl;
	
	for (int i=0;i<n; i++){
		cout<<palabras[i]<<setw(10)<<mat[i][0]<<setw(10)<<mat[i][1]<<setw(12)<<mat[i][2]<<setw(8)<<mat[i][3]<<endl;
	}
	
	return 0;
}

