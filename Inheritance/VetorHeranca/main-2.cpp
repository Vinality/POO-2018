#include <iostream>
#include "Vetor.h"

using namespace std;

int main(){

	//Cria Objeto
	Vetor vet(2);

	//vet.inicializar();

	int menu = 0;
	int elemento;
	int nRepeticoes;
	int posicao;
	int recuperado;

	while (menu != 6){
		cout << endl << "Escolha uma das opcoes abaixo:" << endl;
		cout << "1 - Para inserir um elemento no vetor." << endl;
		cout << "2 - Para remover um elemento no vetor." << endl;
		cout << "3 - Para recuperar um elemento no vetor." << endl;
		cout << "4 - Para preencher o vetor com um determinado elemento." << endl;
		cout << "5 - Para imprimir os elementos do vetor." << endl;
		cout << "6 - Para Sair." << endl;
		cout << "7 - Para imprimir o primeiro termo do vetor." << endl;
		cout << "8 - Para imprimir o ultimo termo do vetor." << endl;
		cout << "9 - Para imprimir a soma dos elementos do vetor." << endl;
		cout << "10 - Para imprimir a média dos elementos do vetor." << endl;
		cin >> menu;

		switch (menu) {
            case 1:{
                cout << "Digite o elemento que deseja inserir" << endl;
                cin >> elemento;
                if (vet.inserir(elemento))
                	cout << "Elemento " << elemento << ", inserido com sucesso!" << endl;
                else
                	cout << "Nao foi possi�vel inserir o elemento, verifique se o vetor nao est� cheio" << endl;
                break;
            }
            case 2:{
                cout << "Digite o elemento que deseja remover" << endl;
                cin >> elemento;
                if (vet.remover(elemento))
                	cout << "Elemento " << elemento << ", removido com sucesso!" << endl;
                else
                	cout << "Nao foi possi�vel encontrar o elemento ou vetor esta vazio!" << endl;
                break;
            }
            case 3:{
                cout << "Digite a posicao do elemento que deseja recuperar" << endl;
                cin >> posicao;
                recuperado = vet.recuperarElemento(posicao);
                if (recuperado != -1)
                	cout << "Elemento recuperado foi o numero " << recuperado << "." << endl;
                else
                	cout << "Nao foi possi�vel encontrar o elemento!" << endl;
                break;
            }
            case 4:{
                cout << "Digite o numero com o qual voce deseja preencher o vetor" << endl;
                cin >> elemento;
                cout << "Quantas repeticoes do elemento voce deseja?"<< endl;
                cin >> nRepeticoes;
                vet.preencher(elemento, nRepeticoes);
                break;
            }

            case 5:{
            	Vetor vet2(vet);
            	cout << "vetz" << endl;
               	vet.imprimir();
               	cout << endl << "vet 2" << endl;
               	vet2.imprimir();
                break;
            }

            case 6:{
               	cout << "Bye!" << endl;
                break;
            }

			case 7:{
				VetorExtendido vetz(vet);
				cout << "O primeiro elemento do vetor vetz é " << vetz.getFirst() << endl;
				break;
			}

			case 8:{
				VetorExtendido vetz(vet);
				cout << "O ultimo elemento do vetor vetz é " << vetz.getLast() << endl;
				break;
			}

			case 9:{
				VetorExtendido vetz(vet);
				cout << "A soma dos elementos do vetor vetz é " << vetz.arraySum() << endl;
				break;
			}

			case 10:{
				VetorExtendido vetz(vet);
				cout << "A média dos elementos do vetor vetz é " << vetz.arrayMean() << endl;
				break;
			}

            default: {
                cout << "Digite um numero valido" << endl;
                break;
            }
        }// fim switch
	}

	return 0;
}
