#include <iostream>
using namespace std;

class persona
{
private: 
    int ID;
    int Ntelefono;
    int Direccion;
    string Nombre;
    string Email;
    int Edad;
    persona(int,int,int,int,string,string);
    void Registrar();
    void Modificar();
    void Eliminar();
    void Consultar();
};
persona::persona(int pID, int pEdad, int pNtelefono, int pDireccion, string pNombre, string pEmail){
ID = pID;
Ntelefono = pNtelefono;
Direccion = pDireccion;
Nombre = pNombre;
Email = pEmail;
Edad = pEdad;
}
class empleado : public persona{
private:
    int codigoEmpleado;
public:
    empleado(int,int,int,int,string,string,int);
    void infoEmpleado();
};
empleado::empleado(int pID, int pEdad, int pNtelefono, int pDireccion, string pNombre, string pEmail,int pCodigoEmpleado) : persona(pID,pEdad,pNtelefono,pDireccion,pNombre,pEmail){
codigoEmpleado=pCodigoEmpleado;
}
 void persona::Registrar()
    {
        cout << " has ingresado al sistema de Registro " << endl;
    }

    void persona:: Modificar()
    {
        cout << " has ingresado al sistema de Modificacion " << endl;
    }

    void persona::Eliminar()
    {
        cout << " has ingresado al sistema de eliminar " << endl;
    }

    void persona::Consultar()
    {
        cout << " has ingresado al sistema de consultar " << endl;
    }

void empleado::infoEmpleado(){
    Registrar();
    Modificar();
    Eliminar();
    Consultar();
}

int main(){
persona h1 = persona(12345,18,987654,666,"Bryan Ariana","barianaj@miumg.edu.gt");
h1.Registrar();
h1.Modificar();
h1.Eliminar();
h1.Consultar();


return 0;
}
