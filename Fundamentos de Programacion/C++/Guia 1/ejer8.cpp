#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int suc1_sem1,suc1_sem2,suc2_sem1,suc2_sem2;
	int cant_empleados1,cant_empleados2;
	int total_suc1,total_suc2;
	float porc_suc1,porc_suc2;
	
	
	cout<<"Ingrese el monto del semestre 1 de la sucursal 1"<<endl;
	cin>>suc1_sem1;
	cout<<"Ingrese el monto del semestre 2 de la sucursal 1"<<endl;
	cin>>suc1_sem2;
	cout<<"Ingrese el monto del semestre 1 de la sucursal 2"<<endl;
	cin>>suc2_sem1;
	cout<<"Ingrese el monto del semestre 2 de la sucursal 2"<<endl;
	cin>>suc2_sem2;
	
	cout<<"Ingrese la cantidad de empleados de la sucursal 1"<<endl;
	cin>>cant_empleados1;
	cout<<"Ingrese la cantidad de empleados de la sucursal 2"<<endl;
	cin>>cant_empleados2;
	
	total_suc1=suc1_sem1+suc1_sem2;
	total_suc2=suc2_sem1+suc2_sem2;
	
	cout<<"Total de ventas sucursal 1: $"<<total_suc1;
	cout<<"Total de ventas sucursal 2: $"<<total_suc2;
	
	porc_suc1=total_suc1*0.2;
	porc_suc2=total_suc2*0.2;
	
	cout<<"La sucursal 1 pago $"<<porc_suc1/cant_empleados1<<" a cada empleado"<<endl;
	cout<<"La sucursal 2 pago $"<<porc_suc2/cant_empleados2<<" a cada empleado"<<endl;

	return 0;
}

