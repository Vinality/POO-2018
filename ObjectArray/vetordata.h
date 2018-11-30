#ifndef VETORDATA_H
#define VETORDATA_H
#include "data.h"

class VetorData{

    private:
        Data *vet;
        int maxDatas;
        int contDatas;

    public:
        VetorData();
        ~VetorData();
        void novaData(int d, int m, int a);
        void mostraDataVet(int i);
};

#endif
