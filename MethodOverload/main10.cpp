//Vinicius Brandao Crepschi 743601
#include <iostream>
#include "listaordenada.h"

int main(){
    ListaLigada lista;
    cout << "Lista Ligada" << endl;
    lista.inserir(20, 1);
    lista.inserir(10, 1);
    lista.inserir(30, 1);
    lista.inserir(4, 1);
    lista.inserir(53, 1);
    lista.inserir(2, 1);

    lista.mostrar();

    cout << "Lista 2 Ordenada" << endl;
    ListaOrdenada lista2;
    lista2.inserir(20);
    lista2.inserir(10);
    lista2.inserir(30);
    lista2.inserir(4);
    lista2.inserir(53);
    lista2.inserir(2);

    lista2.mostrar();
    cout << "Removendo o 4: " << endl;

    lista2.remover(4);
    lista2.mostrar();

    return 0;
}
