#include <iostream>
using namespace std;

class persona
{
public:
    void Registrar()
    {
        cout << "Esta ingresando al modulo para registrar" << endl;
    }
    void Modificar()
    {
        cout << "Esta ingresando al modulo para modificar" << endl;
    }
    void Eliminar()
    {
        cout << "Esta ingresando al modulo para eliminar" << endl;
    }
    void Consultar()
    {
        cout << "Esta ingresando al modulo para consulta" << endl;
    }
};
int main()
{
    persona PrimerEmpleado;

    PrimerEmpleado.Registrar();
    PrimerEmpleado.Modificar();
    PrimerEmpleado.Eliminar();
    PrimerEmpleado.Consultar();
}
