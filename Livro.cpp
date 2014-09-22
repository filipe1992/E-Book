#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Livro.h"


Livro::Livro(const string nome,const string autor, int numerodepaginas)
{
	setNome(nome);
	setAutor(autor);
	setNumeroDePaginas(numeodepaginas);
	setPaginaAtual(0);
	setMarcarPagina(0);
}

Livro::Livro()
{
	setNome("desconhecido");
	setNomeAutor("desconecido");
	setNumeroDePaginas(0);
	setPaginaAtual(0);
	setMarcarPagina(0);
}

void Livro::mudarpagina(const int direcao)
{
	if (direção)
		this->paginaatual=incementaPagina(this->paginaatual);
	else
		this->paginaatual=padecrementaPagina(this->paginaatual);
}

void Livro::marcarpagina(const int paginaatual)
{
	this->paginamarcada=paginaatual;
}

void Livro::reler()
{
	int esc;
	
	this->paginaatual=0;
	cout <<"deseja apagar a pagina "<<this->paginamarcada<<"que esta marcada[1=sim/0=nao]" << endl;
	cin << "%d",&esc<<endl;
	if (esc) 
		this->paginamarcada=0;
}

void Livro::BuscarPagina(const int pagina)
{
	if ((pagina<=this->numerodepaginas)||(pagina>=0))
		this->paginaatual=pagina;
	else
		cout <<"a pagina: "<<pagina<<" buscada é invalida pos nao esta no intervalo de 0 ate "<<this->numerodepaginas<<"(buscarpagina)!!"<<endl;
}

void Livro::setNomeLivro(const string nome)
{
	this->nome=nome;
}

void Livro::setNomeAutor(const string autor)
{
	this->autor=autor;
}

int Livro::setNumeroDePaginas(const int paginas)
{
	this->numerodepaginas=paginas;
}

void Livro::MostrarDetalhes(){
	cout <<"nome do livro: "<<this->mone<<"\nnome do autor: "<<this->autor<<"\nnumero de paginas: "<<this->numerodepaginas<<"\nmagina atual: "<<this->paginaatual<<(this->paginamarcada!=0)? "\ncom marcacao em: "<<this->paginamarcada:" " endl;
	//if (this->paginamarcada!=0)
	//	cout <<"\ncom marcacao em: "<<this->paginamarcada<<endl;
}
	
string Livro::getNomeLivro()
{
	return this->nome;
}
	
string Livro::getNomeAutor()
{
	return this->autor;
}

int Livro::getNumeroDePaginas()
{
	return this->numerogepaginas;	
}

int Livro::getPaginaAtual()
{
	return this->paginaatual;	
}

