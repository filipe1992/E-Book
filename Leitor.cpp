#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Leitor.h"


Leitor::Leitor(string nome)
{
	Leitor::setNome(nome);
	this->setBiblioteca();
}

Leitor::Leitor()
{
	this->biblioteca->Biblioteca();
	this->nome="desconhecido";
}

void Leitor::setBiblioteca()
{
	this->biblioteca.Biblioteca();
}

void Leitor::setNome(string nome)
{
	this->nome=nome;
}
