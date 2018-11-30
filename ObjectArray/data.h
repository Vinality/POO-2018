#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <string>
using namespace std;

class Data{

    private:
        int dia, mes, ano;

    public:
        Data();
        Data(int d, int m, int a);
        void atualizaDia(int d);
        void atualizaMes(int m);
        void atualizaAno(int a);
        void mostraData();
        string getMes();
};
#endif
