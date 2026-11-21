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
		void asignarDisplay(Display*);
        void mostrarReloj();
};

Reloj::Reloj(int h,int m,int s){
    pHora=new Hora(h,m,s);
}

void Reloj::asignarDisplay(Display *disp){
    pDisplay=disp;
}

void Reloj::mostrarReloj(){
    if(pDisplay->getTipo()=="digital"){
        cout<<pDisplay->getTipo()<<endl;
        cout<<pHora->getHora()<<":";
        cout<<pHora->getMinutos()<<":";
        cout<<pHora->getSegundos();
        cout<<"]"<<endl;
    }
    else{
        cout<<pDisplay->getTipo()<<endl;
        cout<<pHora->getHora()<<":";
        cout<<pHora->getMinutos()<<":";
        cout<<pHora->getSegundos();
        cout<<endl;
    }
}


int main(){
	int hora,minuto,segundo;
	string tipo;
	
	cout<<"Hora: ";
	cin>>hora;
	cout<<"Minutos: ";
    cin>>minuto;
    cout<<"Segundos: ";
    cin>>segundo;

	cout<<"Tipo de Display: ";
	cin>>tipo;
	
	Display pantalla(tipo);
	Reloj reloj(hora,minuto,segundo);
	reloj.asignarDisplay(&pantalla);
	cout<<"\n\n";
	reloj.mostrarReloj();
	
	return 0;
}
