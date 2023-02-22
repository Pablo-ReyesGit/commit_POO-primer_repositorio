#include <iostream>
#include "personas.cpp"
using namespace std;

class empleado : personas {
	private: string co_empleado, puesto;
	
	public :
	empleado(){
	}	
	empleado(string nom, string ape, string dic, string fn, int tel, string co_emp, string p) : personas(nom, ape, dic, fn, tel){
		co_empleado = co_emp;
		puesto = p;
	}
	
	void setCodigoEmpleado(string co_emp){co_empleado = co_emp;}
	void setNnombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dic){direccion = dic;}
	void setFecha_Nacimiento(string fd){fecha_nacimiento = fd;}
	void setTelefono(int tel){telefono = tel;}
	void setPuesto(string p){puesto = p;}
	
	string getCodigoEmpleado(){return co_empleado;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getFecha_Nacimiento(){return fecha_nacimiento;}
	string getPuesto(){return puesto;}
	
	void mostrar(){
		cout<<"===================="<<endl;
		cout<<co_empleado<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<fecha_nacimiento<<", "<<telefono<<", "<<puesto<<", "<<endl;
	}
};
