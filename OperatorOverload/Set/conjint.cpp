#include <iostream>
#include "conjint.h"
using std::cout;
using std::endl;

ConjuntoDeInteiros::ConjuntoDeInteiros(){
    for(int i=0; i<101; i++)
        con[i] = 0;
}

ConjuntoDeInteiros ConjuntoDeInteiros::uniaoConjuntos(ConjuntoDeInteiros c) const{
    ConjuntoDeInteiros uniao;
    for(int i=0; i<101; i++){
        if(con[i] == 1 || c.con[i] == 1)
            uniao.con[i]=1;
    }
    return uniao;
}

ConjuntoDeInteiros ConjuntoDeInteiros::intersecao(ConjuntoDeInteiros c) const{
    ConjuntoDeInteiros inter;
    for(int i=0; i<101; i++){
        if(con[i] == 1 && c.con[i] == 1)
            inter.con[i]=1;
    }
    return inter;
}

void ConjuntoDeInteiros::insereElemento(int i){
    if(i <= 101 && i >= 0)
        con[i]=1;
}

void ConjuntoDeInteiros::removeElemento(int i){
    if(i <= 101 && i >= 0)
        con[i]=0;
}

void ConjuntoDeInteiros::imprimeConjunto(){
    int flag = 1;
    for(int i=0; i<101; i++){
        if(con[i]==1){
            cout << i << " ";
            flag = 0;
        }
    }
    if(flag)
        cout << "---" << endl;

    cout << endl;
}

bool ConjuntoDeInteiros::operator== (ConjuntoDeInteiros c2) const{
    for(int i=0; i<101; i++){
        if(con[i]!=c2.con[i])
            return 0;
    }
    return 1;
}
