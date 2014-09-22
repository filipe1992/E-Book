#ifndef LIVRO_H
#define LIVRO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

class Livro
{
private:
	char nome;

	int autor;

	int numerodepaginas;

	int paginaatual;

	int paginamarcada;


public:
	Livro(const string ,const string,const int);

	livro();

	void mudarpagina(const int);

	void marcarpagina(const int);

	void reler();

	int buscarpagina(const int);

	void setNomeLivro(const string);

	void setNomeAutor(const string);

	void setNumeroDePaginas(const int);
	
	string getNomeLivro();
	
	string getNomeAutor();
	
	int getNumeroDePaginas();
	
	int getPaginaAtual();
	
	int getpaginamarcada();

	inline void incrementaPagina(){this->paginaatual++;}

	inline void decrementaPagina(){this->paginaatual--;}

};
#endif
