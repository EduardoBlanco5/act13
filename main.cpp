#include <iostream>
#include "ArregloDinamico.h"

using namespace std;

int main()
{

    ArregloDinamico<string> arreglo;

    arreglo.insertar_final("P"); 
    arreglo.insertar_final("A"); 
   
    arreglo.insertar_inicio("O"); 
    arreglo.insertar_inicio("H"); 
    arreglo.insertar_final("S");

    for(size_t i = 0; i< arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout <<"\n"<<endl;
    arreglo.insertar("L", 2);
    cout << endl;
    for(size_t i = 0; i< arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout <<"\n"<<endl;
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    for(size_t i = 0; i< arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout <<"\n"<<endl;

    arreglo.eliminar(1);
    for(size_t i = 0; i< arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout<<"\n"<<endl;

    string *s = arreglo.buscar("O");
    cout << s << " " << *s << endl;
    system("pause");
    return 0;
}