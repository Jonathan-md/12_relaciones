#include<iostream>
#include<string>
using namespace std;

class Display{
	private:
		string tipo;
	public:
		Display(string);
		string getTipo();
};

Display::Display(string tip){
	tipo= tip;
}

string Display::getTipo(){
	return tipo;
}

class Hora{
	private:
		int hora;
		int minutos;
		int segundos;
	public:
		Hora(int,int,int);
		int getHora();
		int getMinutos();
		int getSegundos();
};

Hora::Hora(int hrs,int min,int seg){
	hora=hrs;
	minutos=min;
	segundos=seg;
}

int Hora::getHora(){
	return hora;
}

int Hora::getMinutos(){
	return minutos;
}

int Hora::getSegundos(){
	return segundos;
}

class Reloj{
	private:
		Display *pDisplay;
		Hora *pHora;
	public:
		Reloj(int,int,int);
};


int main(){
	
	
	return 0;
}
