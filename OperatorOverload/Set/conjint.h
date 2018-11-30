#ifndef CONJINT_H
#define CONJINT_H
#include <iostream>

class ConjuntoDeInteiros{

    private:
        int con[101];

    public:
        ConjuntoDeInteiros();
        ConjuntoDeInteiros uniaoConjuntos(ConjuntoDeInteiros c) const;
        ConjuntoDeInteiros intersecao(ConjuntoDeInteiros c) const;
        void insereElemento(int i);
        void removeElemento(int i);
        void imprimeConjunto();
        bool operator== (ConjuntoDeInteiros c2) const;
};

#endif
