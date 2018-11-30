//Vinicius Brandao Crepschi 743601
#include "listaordenada.h"
//É necessário sobrecarregar o inserir para realizar insercao em ordem
//Poderia-se sobrecarregar o localiza para aplicar busca binaria melhorando
//a eficiencia

void ListaOrdenada::inserir(int dado){
    No* novo = new No();
    novo->dado = dado;

    if(head == NULL){
        head = novo;
        return;
    }
    else if(dado < head->dado){
        novo->prox = head;
        head = novo;
        return;
    }
    else{
        No* temp = head;
        while(dado > temp->prox->dado){
            temp = temp->prox;
            if(temp->prox == NULL){
                temp->prox = novo;
                novo->prox = NULL;
                return;
            }
        }
        novo->prox = temp->prox;
        temp->prox = novo;
    }
}
