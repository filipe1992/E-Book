#ifndef LEITOR_H
#define LEITOR_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Biblioteca.h"

class Leitor
{
private:
	char nome;

	Biblioteca biblioteca;


public:
	Leitor(char nome, Biblioteca biblioteca);
	
	Leitor();

	void setBiblioteca(Biblioteca biblioteca);

	void setNome(string nome);

};
#endif
