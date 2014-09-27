#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Livro.h"

class Biblioteca
{
private:
	Livro livros[50];

	int numerodelivros;


public:
	Biblioteca();

	Livro addLivro();

	void deletarLivro();
	
	Livro* buscarLivro(const string &);

	void Ordenar();

	void mostrarLivros();

	void Ler(const Livro &);

};
#endif
