#include "Vetordata2.h"
#include <iostream>

VetorData2::VetorData2(){
    for(int i=0; i<100; i++){
        arr[i]=NULL;
    }
    contDatas = 0;
}

VetorData2::~VetorData2(){
    for(int i=0; i<100; i++){
        delete arr[i];
    }
}

void VetorData2::novaData2(int d, int m, int a){
    Data *temp = new Data(d,m,a);
    arr[contDatas] = temp;
    contDatas++;
}

void VetorData2::mostraDataVet2(int i){
    arr[i]->mostraData();
}
