#include <iostream>
#include <ctime>
#include <string>
#include "data.h"
using namespace std;

Data::Data(){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    ano = 1900 + ltm->tm_year;
    mes = 1 + ltm->tm_mon;
    dia = ltm->tm_mday;
}

Data::Data(int d, int m, int a){
    dia = d;
    ano = a;
    mes = m;
}

void Data::atualizaDia(int d){
    if(d <= 31 && d >= 1)
        dia = d;
}

void Data::atualizaMes(int m){
    if(m <= 12 && m >= 1)
        mes = m;
}

void Data::atualizaAno(int a){
    if(ano >= 1000 && ano <= 3000)
        ano = a;
}

void Data::mostraData(){
    cout << dia << '/' << mes << '/' << ano << endl;
}

string Data::getMes(){
    string m;

    switch(mes){
        case 1:
            m = "Janeiro";
            break;
        case 2:
            m = "Fevereiro";
            break;
        case 3:
            m = "Março";
            break;
        case 4:
            m = "Abril";
            break;
        case 5:
            m = "Maio";
            break;
        case 6:
            m = "Junho";
            break;
        case 7:
            m = "Julho";
            break;
        case 8:
            m = "Agosto";
            break;
        case 9:
            m = "Setembro";
            break;
        case 10:
            m = "Outubro";
            break;
        case 11:
            m = "Novembro";
            break;
        case 12:
            m = "Dezembro";
            break;
    }
    return m;
}
