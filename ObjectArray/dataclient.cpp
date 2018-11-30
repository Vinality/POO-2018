#include <iostream>
#include "data.h"
#include "vetordata.h"
#include "Vetordata2.h"
using namespace std;

int main(){

    Data d1, d2, d3, d4;
    VetorData d5;
    VetorData2 d6;

    d6.novaData2(10,10, 2020);
    d6.novaData2(11, 11, 2021);

    d5.novaData(8, 8, 2018);
    d5.novaData(9, 9, 2019);

    d1.atualizaDia(16);
    d1.atualizaMes(3);
    d1.atualizaAno(2017);

    d2.atualizaDia(7);
    d2.atualizaMes(9);
    d2.atualizaAno(1997);

    d3.atualizaDia(37);
    d3.atualizaMes(13);
    d3.atualizaAno(1827);

    d1.mostraData();
    cout << d1.getMes() << endl;
    d2.mostraData();
    cout << d2.getMes() << endl;
    d3.mostraData();
    cout << d3.getMes() << endl;
    d4.mostraData();
    cout << d4.getMes() << endl;

    d5.mostraDataVet(0);
    d5.mostraDataVet(1);

    d6.mostraDataVet2(0);
    d6.mostraDataVet2(1);
    
    return 0;
}
