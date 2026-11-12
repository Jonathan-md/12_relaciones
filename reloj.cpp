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


int main(){
	
	
	return 0;
}
