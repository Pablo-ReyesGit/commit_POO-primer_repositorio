#include <iostream>
#include "Empleados.cpp"

using namespace std;
int main()
{
	string nombres, apellidos, direccion, fecha_nacimiento, co_empleado, puesto;
	int telefono;
	
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
	cout<<"ingresar el codigo del empleado"<<endl;
	cin>>co_empleado;
	cout<<"ingresar el puesto"<<endl;
	cin>>puesto;
	
	empleado
	obj = empleado(nombres, apellidos, direccion, fecha_nacimiento, telefono,co_empleado, puesto);
	obj.mostrar();
	
	cout<<"zona de modificacion"<<endl;
	cout<<"ingrese el nombre"<<endl;
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
	cout<<"ingrese el codigo del empleado : "<<endl;
	cin>>co_empleado;
	obj.setCodigoEmpleado(co_empleado);
	cout<<"ingrese el puesto : "<<endl;
	cin>>puesto;
	obj.setPuesto(puesto);
	
	obj.mostrar();	

}
