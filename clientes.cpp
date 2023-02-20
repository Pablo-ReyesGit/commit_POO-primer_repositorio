#include <iostream>
#include "personas.cpp"
using namespace std;

class cliente : persona {
	private: string nit;
	
	public :
	cliente(){
	}	
	cliente(string nom, string ape, string dic, string fn, int tel, string n) : persona(nom, ape, dic, fn, tel){
		nit = n;
	}
	
	void setNit(string n){nit = n;}
	void setNnombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dic){direccion = dic;}
	void setFecha_Nacimiento(string fd){fecha_nacimiento = fd;}
	void setTelefono(int tel){telefono = tel;}
	
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getFecha_Nacimiento(){return fecha_nacimiento;}
	
	void mostrar(){
		cout<<"===================="<<endl;
		cout<<nit<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<fecha_nacimiento<<", "<<telefono<<", "<<endl;
	}
};
