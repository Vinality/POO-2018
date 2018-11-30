#include "data.h"
#include "vetordata.h"

VetorData::VetorData() : maxDatas(100){
    vet = new Data[maxDatas];
    contDatas = 0;
}

VetorData::~VetorData(){
    delete [] vet;
}

void VetorData::novaData(int d, int m, int a){
    vet[contDatas] = Data(d,m,a);
    contDatas++;
}

void VetorData::mostraDataVet(int i){
    vet[i].mostraData();
}
