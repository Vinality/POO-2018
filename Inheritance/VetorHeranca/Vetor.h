#include <iostream>


class Vetor{

private:

	int tamanho;
	int *elementos;
	int tamanhoMaximo;

public:

	Vetor(const int &max = 100);
	Vetor(const Vetor &v);
	~Vetor();
	void preencher(const int &elemento, const int &nRepeticoes);
	bool inserir(const int &elemento);
	bool remover(const int &elemento);
	int recuperarElemento(const int &posicao) const;
	void imprimir() const;
	int getTamanho();
	int getTamanhoMaximo();
};

class VetorExtendido : public Vetor{

public:

	VetorExtendido();
	VetorExtendido(const Vetor &v): Vetor(v) {};
	int getFirst();
	int getLast();
	int arraySum();
	int arrayMean();
	void search(const int &valor);
};
