#include <iostream>
using namespace std;

class persona
{
private: //Definición de información requerida.
    int ID;
    int Ntelefono;
    int Direccion;
    string Nombre;
    string Email;
    int Edad;
public: //Metodos a utilizar.
    persona(int,int,int,int,string,string);
    void Registrar();
    void Modificar();
    void Eliminar();
    void Consultar();
};
//Constructor de "persona"
persona::persona(int pID, int pEdad, int pNtelefono, int pDireccion, string pNombre, string pEmail){
ID = pID;
Ntelefono = pNtelefono;
Direccion = pDireccion;
Nombre = pNombre;
Email = pEmail;
Edad = pEdad;
}
// Sub clase empleado
class empleado : public persona{
private:
    int codigoEmpleado;
public:
    empleado(int,int,int,int,string,string,int);
    void infoEmpleado();
};
//Constructor de "empleado"
empleado::empleado(int pID, int pEdad, int pNtelefono, int pDireccion, string pNombre, string pEmail,int pCodigoEmpleado) : persona(pID,pEdad,pNtelefono,pDireccion,pNombre,pEmail){
codigoEmpleado=pCodigoEmpleado;
}
//Metodos de "persona"
 void persona::Registrar()
    {
        cout <<Nombre<< " ha ingresado al sistema de Registro " << endl;
    }

    void persona:: Modificar()
    {
        cout <<Nombre<< " ha ingresado al sistema de Modificacion " << endl;
    }

    void persona::Eliminar()
    {
        cout <<Nombre<< " ha ingresado al sistema de eliminar " << endl;
    }

    void persona::Consultar()
    {
        cout <<Nombre<< " ha ingresado al sistema de consultar " << endl;
    }
//metodos de "empleado"
void empleado::infoEmpleado(){
    Registrar();
    Modificar();
    Eliminar();
    Consultar();
    cout<<"Codido de empleado: "<<codigoEmpleado<<endl;
}

int main(){
persona humano1 = persona(2968222130101, 19, 57181667, 25-223, "Victor", "vjerezm@miumg.edu.gt");
humano1.Registrar();
humano1.Modificar();
humano1.Eliminar();
humano1.Consultar();
cout<<" "<<endl;
empleado humano2 = empleado(2332334567890, 20, 45465467, 19-48, "Jose", "jh45@hotmail.com", 232);
humano2.infoEmpleado();
cout<<""<<endl;
cout<<"___| Nombre:                      Carnet:      |___"<<endl;
cout<<"   | Victor Josue Jerez Mijangos; 9959-21-2081 |   "<<endl;
return 0;
}
