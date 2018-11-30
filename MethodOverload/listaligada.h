//Vinicius Brandao Crepschi 743601
#include <iostream>

class No{
public:
    No* prox;
    int dado;
};

using namespace std;

class ListaLigada{

    public:
        No* head;

        ListaLigada();
        ~ListaLigada();
        void inserir(int dado, int posi = 1);
        void mostrar();
        bool vazia();
        int localiza(int);
        void remover(int dado);
};
