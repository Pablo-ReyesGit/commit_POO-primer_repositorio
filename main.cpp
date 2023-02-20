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
	
	cout<<"ingrese el Nit : "<<endl;
	cin>>nit;
	obj.setNit(nit);
	/*obj.setNnombres();
	obj.setApellidos();
	obj.setDireccion();
	obj.setFecha_Nacimiento();
	obj.setTelefono()
	obj.mostrar();*/
	
	cout<<obj.getNit();
		
}
