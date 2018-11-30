/*
 * gerenciaFormas.cpp
 *
 *  Created on: 21/10/2008
 *      Author: katti
 */

//Vinicius Brandao Crepschi RA 743601

#include <iostream>
using namespace std;

#include "triangulo.h"
#include "retangulo.h"
#include "circulo.h"
#include "esfera.h"
#include "paralelogramo.h"
#include "cubo.h"
#include "Forma.h"

using namespace std;

Forma *criaForma()
{
	Forma *pForma;
	int formaCriar;
	cout << endl << endl;
	cout<<"1 - Circulo" << endl;
	cout<<"2 - Triangulo" << endl;
	cout<<"3 - Retangulo" << endl;
	cout<<"4 - Esfera" << endl;
	cout<<"5 - Paralelogramo" << endl;
	cout<<"6 - Cubo" << endl;

	cout<<"Qual forma desena criar? " << endl;
	cin >> formaCriar;
	cin.get();
	cout << endl;
	switch(formaCriar)
	{
		case 1:
		{
			float r;
			cout << "Raio do circulo: ";
			cin >> r;
			pForma = new circulo(r);
			break;
		}
		case 2:
		{
			float a, b, c;
			cout << "Lado 1 do triangulo: ";
			cin >> a;
			cout << "Lado 2 do triangulo: ";
			cin >> b;
			cout << "Lado 3 do triangulo: ";
			cin >> c;
			pForma = new triangulo(a, b, c);
			break;
		}
		case 3:
		{
			float b, h;
			cout << "Base do retangulo: ";
			cin >> b;
			cout << "Altura do retangulo: ";
			cin >> h;
			pForma = new retangulo(b, h);
			break;
		}
		case 4:
		{
			float r;
			cout << "Raio da esfera: ";
			cin >> r;
			pForma = new esfera(r);
			break;
		}
		case 5:
		{
			float a, b, h;
			cout << "Base do paralelogramo: ";
			cin >> b;
			cout << "Diagonal do paralelogramo: ";
			cin >> a;
			cout << "Altura do paralelogramo: ";
			cin >> h;
			pForma = new paralelogramo(a, b, h);
			break;
		}
		case 6:
		{
			float b;
			cout << "Aresta do cubo: ";
			cin >> b;
			pForma = new cubo(b);
			break;
		}
	}
	return pForma;
}

void mostrarFormas(Forma *f[])
{
	int i = 0;
	cout << endl << "As formas criadas sao: " << endl;
	while (f[i] != NULL)
	{
		cout << endl << "A forma " << i+1 << " tem " << f[i]->nDimensoes()
		<< " dimensoes  e eh um " << f[i]->nomeForma() << endl;
		cout << "Perimetro: " << f[i]->perimetro() << endl;
		cout << "Area: " << f[i]->area() << endl;
		cout << "Volume: " << f[i]->volume() << endl << endl;
		i++;
	}
}

int main()
{
	Forma *vetFormas[50];
	int i;
	for (i = 0; i < 50; i++)
	{
		vetFormas[i] = NULL;
	}

	int formaAtual = 0;
	int selecao;
	do
	{
		cout << endl;
		cout << "1 - Criar forma" << endl;
		cout << "2 - Mostrar formas" << endl;
		cout << "3 - Sair" << endl;
		cout << "O que deseja fazer? ";
		cin >> selecao;
		cin.get();
		switch(selecao)
		{
			case 1:
			{
				vetFormas[formaAtual] = criaForma();
				formaAtual++;
				break;
			}
			case 2:
			{
				mostrarFormas(vetFormas);
				break;
			}
		}
	} while ( selecao != 3 );

	i = 0;
	while (vetFormas[i] != NULL)
	{
		delete vetFormas[i];
		vetFormas[i] = NULL;
		i++;
	}
}
