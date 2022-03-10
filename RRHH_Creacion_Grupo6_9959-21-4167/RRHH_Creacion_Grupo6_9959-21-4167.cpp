#include <iostream>
using namespace std;
class Humano
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
    Humano PrimerHumano;
    Humano SegundoHumano;
    Humano TercerHumano;
    Humano CuartoHumano;

    PrimerHumano.Registrar();
    SegundoHumano.Modificar();
    TercerHumano.Eliminar();
    CuartoHumano.Consultar();



    return 0;
}
