#include <iostream>
using namespace std;
class personaje
{
public:

    void registrar ()
    {
        cout << " has ingresado al sistema de registro " << endl;
    }

    void modificar ()
    {
        cout << " has ingresado al sistema de modificacion " << endl;
    }

    void eliminar ()
    {
        cout << " has ingresado al sistema de eliminar " << endl;
    }

    void consultar ()
    {
        cout << " has ingresado al sistema de consultar " << endl;
    }

};
int main()
{
    personaje primerpersonaje;
    personaje segundopersonaje;
    personaje tercerpersonaje;
    personaje cuartopersonaje;

    primerpersonaje.registrar();
    segundopersonaje.modificar();
    tercerpersonaje.eliminar();
    cuartopersonaje.consultar();

    return 0;
}
