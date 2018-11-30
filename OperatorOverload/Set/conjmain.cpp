#include <iostream>
#include "conjint.h"

int main(){
    ConjuntoDeInteiros c1, c2, c3, c4;
    c1.insereElemento(2);
    c1.insereElemento(5);
    c1.insereElemento(8);
    c1.insereElemento(10);
    c1.insereElemento(21);
    c1.insereElemento(27);

    c2.insereElemento(1);
    c2.insereElemento(3);
    c2.insereElemento(9);
    c2.insereElemento(10);
    c2.insereElemento(17);
    c2.insereElemento(31);

    c3.insereElemento(1);
    c3.insereElemento(2);
    c3.insereElemento(3);

    c4.insereElemento(1);
    c4.insereElemento(2);
    c4.insereElemento(4);

    int a = (c3 == c4);

    ConjuntoDeInteiros uni = c1.uniaoConjuntos(c2);
    ConjuntoDeInteiros inter = c1.intersecao(c2);

    c1.imprimeConjunto();
    c2.imprimeConjunto();
    uni.imprimeConjunto();
    inter.imprimeConjunto();
    std::cout << a << std::endl;

    return 0;
}
