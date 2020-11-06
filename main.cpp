#include <iostream>
#include "ArregloDinamico.h"
#include "Computadora.h"

using namespace std;

int main()
{
    ArregloDinamico<Computadora> Computadoras;

    Computadora C01("HP", "WINDOWS", 256.23, 8);
    Computadora C02("MAC", "IOS", 300.30, 4);
    Computadora C03("DELL", "WINDOWS", 400.0, 12);
    Computadora C04("LENOVO", "PATITO", 250.4, 2);
    Computadora C05("HOMEN", "WINDOWS", 500.50, 16);

    Computadoras <<C01 << C02 << C03 << C04 << C05 << C01 << C01;
    Computadora C06("HPs", "WINDOWS", 256.23, 8);

    ArregloDinamico<Computadora*> ptrs = Computadoras.buscar_todos(C06);

    if (ptrs.size()>0)
    {
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *p = ptrs[i];
            cout << *p << endl;
        }
        
    }
    else
    {
        cout<< "No existen coincidencias..." <<endl;
    }
    
    

   /* Computadora *ptr = Computadoras.buscar(C06);

    if(ptr != nullptr)
    {
        cout << *ptr <<endl;
    }else
    {
        cout << "No existe..." << endl;
    }

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
    cout << s << " " << *s << endl;*/
    system("pause");
    return 0;
}