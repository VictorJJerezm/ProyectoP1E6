#include <iostream>
using namespace std;

class usuario
{

public:

    void datos()
    {
        cout << "El modulo de Datos ha sido ingresado" << endl;
    }

    void registrar()
    {
        cout << "El modulo de Registrar ha sido ingresado" << endl;
    }


     void modificar()
    {
        cout << "El modulo de Modificar ha sido ingresado" << endl;
    }

    void eliminar()
    {
        cout << "El modulo de Eliminar ha sido ingresado" << endl;
    }


    void consultar()
    {
        cout << "El modulo de Consultar ha sido ingresado" << endl;
    }

};

int main()
{
    usuario PrimerUsuario;

    PrimerUsuario.datos();
    PrimerUsuario.registrar();
    PrimerUsuario.modificar();
    PrimerUsuario.eliminar();
    PrimerUsuario.consultar();

    return 0;
}

