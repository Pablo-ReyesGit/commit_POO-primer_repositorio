#include <iostream>
#include "clientes.cpp"

using namespace std;
int main()
{
	string nit, nombres, apellidos, direccion, fecha_nacimiento;
	int telefono;
	
	cout<<"ingresar nit"<<endl;
	cin>>nit;
	cout<<"ingresar nombres"<<endl;
	cin>>nombres;
	cout<<"ingresar apellidos"<<endl;
	cin>>apellidos;
	cout<<"ingresar direccion"<<endl;
	cin>>direccion;
	cout<<"ingresar fecha de nacimiento"<<endl;
	cin>>fecha_nacimiento;
	cout<<"ingresar telefono"<<endl;
	cin>>telefono;
	
	cliente obj = cliente(nombres, apellidos, direccion, fecha_nacimiento, telefono, nit);
	obj.mostrar();
	
	cout<<"zona de modificacion"<<endl;
	cout<<"ingrese el Nit : "<<endl;
	cin>>nit;
	obj.setNit(nit);
	cout<<"ingrese el nombres : "<<endl;
	cin>>nombres;
	obj.setNnombres(nombres);
	cout<<"ingrese el apellidos : "<<endl;
	cin>>apellidos;
	obj.setApellidos(apellidos);
	cout<<"ingrese el direccion : "<<endl;
	cin>>direccion;
	obj.setDireccion(direccion);
	cout<<"ingrese el fecha de nacimiento : "<<endl;
	cin>>fecha_nacimiento;
	obj.setFecha_Nacimiento(fecha_nacimiento);
	cout<<"ingrese el telefono : "<<endl;
	cin>>telefono;
	obj.setTelefono(telefono);
	
	cout<<obj.getNit();
	obj.mostrar();	

}
