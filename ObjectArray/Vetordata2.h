#ifndef VETORDATA2_H
#define VETORDATA2_H
#include "data.h"

class VetorData2{

    private:
        Data *arr[100];
        int contDatas;

    public:
        VetorData2();
        ~VetorData2();
        void novaData2(int d, int m, int a);
        void mostraDataVet2(int i);
};

#endif
