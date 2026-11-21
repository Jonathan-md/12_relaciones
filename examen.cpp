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

class Examen{
	private:
		string asignatura;
		string ciclo;
		Fecha fecha;
		Hora hora;
	public:
		Examen(string,string,int,int,int,int,int);
		void mostrarExamen();
};

Examen::Examen(string asg,string cic,int d,int m,int a,int hr,int min) : fecha(d,m,a), hora(hr,min){
	asignatura=asg;
	ciclo=cic;
}

void Examen::mostrarExamen(){
	cout<<"Asignatura: "<<asignatura<<endl;
	cout<<"Ciclo: "<<ciclo<<endl;
	cout<<"Fecha: ";
	fecha.mostrarFecha();
	cout<<"Hora: ";
	hora.mostrarHora();
}

int main(){
	string asignatura,ciclo;
	int dia,mes,ano,hora,minuto;
	
	cout<<"Asignatura: ";
	getline(cin,asignatura);
	cout<<"Ciclo: ";
	getline(cin,ciclo);
	cout<<"Dia: ";
	cin>>dia;
	cout<<"Mes: ";
	cin>>mes;
	cout<<"Ano: "; 
	cin>>ano;
	cout<<"Hora: ";
	cin>>hora;
	cout<<"Minutos: ";
	cin>>minuto;
	
	Examen exm(asignatura,ciclo,dia,mes,ano,hora,minuto);
	
	cout<<"\nDATOS DEL EXAMEN"<<endl;
	exm.mostrarExamen();
	
	return 0;
}
