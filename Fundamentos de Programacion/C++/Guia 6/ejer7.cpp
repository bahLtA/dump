#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,precioHoraNormal,precioHoraExtra,aux;
	int Empleado[4][9999]; //0 por el codigo del empleado, 1 cantidad de horas normales, 2 por las horas extra y 3 por el sueldo
	
	cout<<"Ingrese la cantidad de empleados de la empresa"<<endl;
	cin>>n;
	
	cout<<"Ingrese el valor de la hora normal"<<endl;
	cin>>precioHoraNormal;
	
	precioHoraExtra=precioHoraNormal*2;
	
	for (int i=0;i<n;i++){
		cout<<"Ingrese el codigo del empleado"<<endl;
		cin>>Empleado[0][i];
		cout<<"Ingrese las horas normales trabajadas"<<endl;
		cin>>Empleado[1][i];
		cout<<"Ingrese las horas extra trabajadas"<<endl;
		cin>>Empleado[2][i];
		
		Empleado[3][i]=(Empleado[1][i]*precioHoraNormal)+(Empleado[2][i]*precioHoraExtra);
		cout<<"El sueldo del empleado con codigo "<<Empleado[0][i]<<" es de $"<<Empleado[3][i]<<endl;
	}
	
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (Empleado[3][i]<Empleado[3][j]){
				//Cambia el codigo de los empleados
				aux=Empleado[0][i];
				Empleado[0][i]=Empleado[0][j];
				Empleado[0][j]=aux;
				//Cambia la cantidad de horas normales trabajadas
				aux=Empleado[1][i];
				Empleado[1][i]=Empleado[1][j];
				Empleado[1][j]=aux;
				//Cambia la cantidad de horas extra trabajadas
				aux=Empleado[2][i];
				Empleado[2][i]=Empleado[2][j];
				Empleado[2][j]=aux;
				//Cambia los sueldos
				aux=Empleado[3][i];
				Empleado[3][i]=Empleado[3][j];
				Empleado[3][j]=aux;
			}
		}
	}
	
	cout<<"CODIGO DE EMPLEADO    CANT HORAS NORMALES    CANT HORAS EXTRA    SUELDO $"<<endl;
	for (int i=0;i<n;i++){
		cout<<Empleado[0][i]<<"    "<<Empleado[1][i]<<"    "<<Empleado[2][i]<<"    "<<Empleado[3][i]<<endl;
	}
	
	return 0;
}

