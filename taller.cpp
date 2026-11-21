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

int main(){
	
	return 0;
}


