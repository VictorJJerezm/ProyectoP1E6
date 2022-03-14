#include <iostream>
using namespace std;
class Persona
{
public:


    void Registrar()
    {
        cout << " Usted ha ingresado a modulo de registrar " << endl;
    }


     void Modificar()
    {
        cout << " Usted ha ingresado a modulo de Modificar" << endl;
    }

    void Eliminar()
    {
        cout << " Usted ha ingresado a modulo de Eliminar" << endl;
    }


    void Consultar()
    {
        cout << " Usted ha ingresado a modulo de Consultar" << endl;
    }



};
int main()
{
    Persona PrimeraPersona;
    Persona SegundaPersona;
    Persona TerceraPersona;
    Persona CuartaPersona;

    PrimeraPersona.Registrar();
    SegundaPersona.Modificar();
    TerceraPersona.Eliminar();
    CuartaPersona.Consultar();



    return 0;
}
