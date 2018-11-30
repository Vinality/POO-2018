//Vinicius Brandao Crepschi 743601
#include <iostream>
#include "listaligada.h"

ListaLigada::ListaLigada(){
    head = NULL;
}

ListaLigada::~ListaLigada(){

}

void ListaLigada::inserir(int dado, int posi){
    No* novo = new No();
    novo->dado = dado;

    //No inicio
    if(posi == 1){
        novo->prox = head;
        head = novo;
    }
    //No fim
    else if(posi == -1){
        No* temp = head;
        if(head == NULL){
            head = novo;
            return;
        }
        while(temp->prox){
            temp = temp->prox;
        }
        temp->prox = novo;
        novo->prox = NULL;
    }
}

void ListaLigada::mostrar(){
    No* temp = head;
    int i = 1;
    while(temp){
        cout << i << ": " << temp->dado << endl;
        temp = temp->prox;
        i++;
    }
}

bool ListaLigada::vazia(){
    if(head == NULL)
        return true;
    else
        return false;
}

int ListaLigada::localiza(int find){
    No* temp = head;
    int i = 1;
    while(temp){
        if(temp->dado == find)
            return i;
        i++;
        temp = temp->prox;
    }
    return -1;
}

void ListaLigada::remover(int dado){
	No *temp = head;
	No *ant = NULL;

	if(head == NULL)
		return;

	if(temp->dado == dado){
		head = head->prox;
		return;
	}
	else{
		while(temp != NULL && temp->dado != dado){
			ant = temp;
			temp = temp->prox;
		}
	}

	if(temp!=NULL)
		ant->prox = temp->prox;
}
