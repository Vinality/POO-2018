// Fig. 11.20: Complexo.cpp
// Defini��es de fun��o membro da classe Complexo.
#include <iostream>
using namespace std;

#include "Complexo.h" // defini��o da classe Complexo

void Complexo::setId( string novo){
	ID = novo;
}

string Complexo::getId(){
	return ID;
}

void Complexo::setRe(double re){
	real = re;
}

double Complexo::getRe(){
	return real;
}

void Complexo::setImg(double img){
	imaginaria = img;
}

double Complexo::getImg(){
	return imaginaria;
}

// Construtor
Complexo::Complexo(std::string identificador, double realPart, double imaginaryPart ) : ID(identificador), real( realPart ), imaginaria( imaginaryPart )
{
	cout << "construtor de " << ID << endl;
} // fim do construtor Complexo

Complexo::Complexo(const Complexo &c) // construtor de copia
{
	ID = c.ID;
	real = c.real;
	imaginaria = c.imaginaria;
}

// operador de adi��o
Complexo Complexo::operator+( const Complexo &operand2 ) const
{
   cout << "operador + sobrecarregado" << endl;
   return Complexo("temp do +", real + operand2.real,
      imaginaria + operand2.imaginaria );
} // fim da fun��o operator+

Complexo Complexo::operator+( const double &operand2) const{
	return Complexo("temp do + double", real + operand2, imaginaria);
}

Complexo Complexo::operator+( const int &op ) const{
	return Complexo("temp do + int", real+op, imaginaria);
}

// operador de subtra��o
Complexo Complexo::operator-( const Complexo &operand2 ) const
{
	cout << "operador - sobrecarregado" << endl;
   return Complexo("temp do -", real - operand2.real,
      imaginaria - operand2.imaginaria );
} // fim da fun��o operator-

Complexo Complexo::operator-( const double &operand2 ) const{
	return Complexo("temp do + double", real - operand2, imaginaria);
}

Complexo Complexo::operator-( const int &op ) const{
	return Complexo("temp do - int", real - op, imaginaria);
}

// exibe um objeto Complexo na forma: (a, bi)
void Complexo::print() const
{
    cout << ID << ": (" << real << ", " << imaginaria << "i)" << endl;
} // fim da fun��o print

Complexo Complexo::operator*( const Complexo &operand2) const{
	return Complexo("temp do *", (real*operand2.real - imaginaria*operand2.imaginaria), (real*operand2.imaginaria + operand2.real*imaginaria));
}

Complexo Complexo::operator/( const Complexo &operand2 ) const{
	return Complexo("temp do /", (real*operand2.real + imaginaria*operand2.imaginaria)/(operand2.real*operand2.real + operand2.imaginaria*operand2.imaginaria)
,(imaginaria*operand2.real - real*operand2.imaginaria)/(operand2.real*operand2.real + operand2.imaginaria*operand2.imaginaria));
}

bool Complexo::operator==( const Complexo &op) const{
	return (real == op.real && imaginaria == op.imaginaria);
}

bool Complexo::operator!=( const Complexo &op) const{
	return (real != op.real || imaginaria != op.imaginaria);
}

ostream& operator<<(ostream &out, Complexo &c){
	string id;
	double re, img;
	id = c.getId();
	re = c.getRe();
	img = c.getImg();

	out << id << " " << "(" << re << "+" << img << "i)" << endl;

	return out;
}

istream &operator>> (istream &in, Complexo &c){
	string id;
	double re, img;
	in >> id;
	c.setId(id);
	in.ignore(1);
	in >> re;
	c.setRe(re);
	in.ignore(1);
	in >> img;
	c.setImg(img);

	return in;
}
