#include<iostream>
#include<string>
using namespace std;

class Fecha{
	private:
		int dia;
		int mes;
		int ano;
	public:
		Fecha(int,int,int);
		void mostrarFecha();
};

Fecha::Fecha(int d,int m,int a){
	dia=d;
	mes=m;
	ano=a;
}

void Fecha::mostrarFecha(){
	cout<<dia<<"/"<<mes<<"/"<<ano<<endl;
}

class Hora{
	private:
		int hora;
		int minuto;
	public:
		Hora(int,int);
		void mostrarHora();
};

Hora::Hora(int hr,int min){
	hora=hr;
	minuto=min;
}

void Hora::mostrarHora(){
	cout<<hora<<":"<<minuto<<endl;
}


int main(){
	
	return 0;
}




























