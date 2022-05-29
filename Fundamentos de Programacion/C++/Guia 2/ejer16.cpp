#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int precio_ddl,precio_mouse,precio_fruta,tipo_de_caja,subtotal,total,recargo=0,iva;
	char regalo='F';
	string nya,gusto;
	
	cout<<"Ingrese el precio del alfajor de dulce de leche"<<endl;
	cin>>precio_ddl;
	cout<<"Ingrese el precio del alfajor de mouse"<<endl;
	cin>>precio_mouse;
	cout<<"Ingrese el precio del alfajor de fruta"<<endl;
	cin>>precio_fruta;
	
	cout<<"Ingrese el nombre del cliente"<<endl;
	getline(cin,nya);
	cout<<"Ingrese el gusto (DDL, Frutal o Mouse)"<<endl;
	cin>>gusto;
	cout<<"Ingrese el tipo de caja (6, 12 o 24)"<<endl;
	cin>>tipo_de_caja;
	cout<<"Es para regalo? (V o F)"<<endl;
	cin>>regalo;
	regalo=toupper(regalo);
	
	if (gusto=="DDL"){
		subtotal=precio_ddl*tipo_de_caja;
	}
	if (gusto=="Frutal"){
		subtotal=precio_fruta*tipo_de_caja;
	}
	if (gusto=="Mouse"){
		subtotal=precio_mouse*tipo_de_caja;
	}
	
	if (regalo=='V'){
		recargo=250;
	}
	
	if (tipo_de_caja==12){
		subtotal-=subtotal*0.1;
	}
	if (tipo_de_caja==24){
		subtotal-=subtotal*0.2;
	}
	
	iva=subtotal*0.21;
	
	total=subtotal+iva;
	
	cout<<"Cliente: "<<nya<<endl;
	cout<<"Tipo de caja: "<<tipo_de_caja<<endl;
	cout<<"Gusto: "<<gusto<<endl;
	cout<<"SubTotal: "<<subtotal<<endl;
	cout<<"Recargo Regalo: "<<recargo<<endl;
	cout<<"IVA 21%: "<<iva<<endl;
	cout<<"Total: "<<total;
	
	return 0;
}

