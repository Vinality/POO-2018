#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class Complexo
{
public:
   Complexo(std::string identificador = "", double = 0.0, double = 0.0 ); // construtor
   Complexo(const Complexo &c);
   Complexo operator+( const Complexo & ) const; // adicao
   Complexo operator+( const double & ) const; //adicao complex e double
   Complexo operator+( const int & ) const; // adicao complex e int
   Complexo operator-( const Complexo & ) const; // subtracao
   Complexo operator-( const double & ) const; // subtracao complex e double
   Complexo operator-( const int & ) const; // adicao complex int
   Complexo operator*( const Complexo & ) const; // multiplicacao
   Complexo operator/( const Complexo & ) const; // divisao
   bool operator==( const Complexo & ) const; // igualdade de complex
   bool operator!=( const Complexo & ) const; // diferenca de complex
   void print() const; // saida

   //get-setters
   void setId( string );
   void setRe( double );
   void setImg( double );
   string getId();
   double getRe();
   double getImg();

private:
   string ID; // identificador do objeto
   double real; // parte real
   double imaginaria; // parte imaginaria
}; // fim da classe Complexo

ostream & operator << (ostream &out, Complexo &c);
istream & operator >> (istream &in, Complexo &c);

#endif
