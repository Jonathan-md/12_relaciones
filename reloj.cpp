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
};


int main(){
	
	
	return 0;
}
