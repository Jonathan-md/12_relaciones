#include<iostream>
#include<string>
using namespace std;

class Cliente{
	private:
		string nombre;
		string direccion;
		string telefono;
	public:
		Cliente(string,string,string);
		void mostrarCliente();
};

Cliente::Cliente(string nomb,string dirc,string telf){
	nombre=nomb;
	direccion=dirc;
	telefono=telf;
}

void Cliente::mostrarCliente(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Direccion: "<<direccion<<endl;
	cout<<"Telefono: "<<telefono<<endl;
}

class Auto{
	private:
		string marca;
		string modelo;
		string color;
		string placa;
	public:
		Auto(string,string,string,string);
		void mostrarAuto();
};

Auto::Auto(string mar,string mo,string co,string pla){
	marca=mar;
	modelo=mo;
	color=co;
	placa=pla;
}

void Auto::mostrarAuto(){
	cout<<"Marca: "<<marca<<endl;
	cout<<"Modelo: "<<modelo<<endl;
	cout<<"Color: "<<color<<endl;
	cout<<"Placa: "<<placa<<endl;
}

class OrdenTrabajo{
	private:
		int identf;
		Cliente cliente;
		Auto aut;
	public:
		OrdenTrabajo(int,string,string,string,string,string,string,string);
		void mostrarOrdenTrabajo();
};

OrdenTrabajo::OrdenTrabajo(int id,string nomb,string dirc,string telf,string mar,string mo,string co,string pla) : cliente(nomb,dirc,telf),aut(mar,mo,co,pla){
	identf=id;
}

void OrdenTrabajo::mostrarOrdenTrabajo(){
	cout<<"N° de Orden: "<<identf<<endl;
	cout<<"\nDATOS DEL CLIENTE"<<endl;
	cliente.mostrarCliente();
	cout<<"\nDATOS DEL AUTO"<<endl;
	aut.mostrarAuto();
}

int main(){
	
	return 0;
}
