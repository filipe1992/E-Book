#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Biblioteca.h"


Biblioteca::Biblioteca()
{
	int i;
	for (i=0;i<50;i++)
		Livro::livros[i]();
	numerodelivros=0;
}

void Biblioteca::Addlivro()
{
	if (this->numerodelivros<50){
		std::cout << "deseja inserir nome, autor e numero de paginas agora ?[1=sim/o=nao]"<<std::endl;
		std::cin >> esc <<std::endl;
		if (!esc)
			Livro::this->livros[this->numerodelivros++]();
		else{
			std::cout <<"digite o nome do livro: "<<std::endl;
			std::cin >> nome <<std::endl;
			std::cout <<"digite o nome do autor: "<<std::endl;
			std::cin >> autor <<std::endl;
			std::cout <<"digite o numero de paginas: "<<std::endl;
			std::cin >> numerodepaginas <<std::endl;
			Livro::this->livros[this->numerodelivros++](nome,autor,numerodepaginas);
		}
	}
}

void Biblioteca::Deletarlivro()
{
	string nome;
	Livro *livroaserdeletado;
	
	std::cout <<" digite o nome do livro: "<<std::endl;
	std::cin >> nome<<std::endl;
	*livroaserdeletado=Biblioteca::buscarLivro(&nome);
	do{
		std::cout <<"voce deseja deletar este liivro :\n"<<std::endl;
		*livroaserdeletado->MostrarDetalhes();
		cout <<"???[1=sim/0=nao]"<<std::endl;
		cin >> esc <<std::endl;
	}while((esc!=0)||(esc!=1));
	if (esc){
		Livro::*livroaserdeletado();
		std::cout << "para finaliza escolha um tipo de ordenação";
		Biblioteca::Ordenar();
	}
}

void Biblioteca::Ordenar()
{
	// ordenação com o algoritmo de inserção
	int i,j,esc,ordenarpor;
	Livro pivo;
	
	do{
		std::cout << "deseja ordenar por nome [digite 1], por altor[digite 2], por porcentagem lida [digite 3]"
		cin<< ordenarpor <<std::endl;
	}while((ordenarpor < 3)||(ordenarpor < 1));
	switch(ordenarpor){
		case: 1
			do{
				
				std::cout <<"deseja ordenar de A-Z [digite 1] ou Z-A [digite 2]"<<std::endl;
				cin<< esc <<std::endl;
		    }while((esc!=0)||(esc!=1));
			 
			 if (esc==1){     
		         for (i=1;i<this->numerodelivros;i++){
		             pivo=this->livros[i];
		             j=i-1;
		             while (((pivo->getNomeLivro() < this->livros[j]->getNomeLivro())&&(j>=0))&&((pivo->getNumeroDePaginas()>0)&&(this->livros[j]->getNumeroDePaginas()>0))){
		                   this->livros[j+1]=this->livros[j];
		                   j--;
		             }
		             this->livros[j+1]=pivo;
		         }
		     }else{
		          for (i=1;i<this->numerodelivros;i++){
		             pivo=this->livros[i];
		             j=i-1;
		             while (((pivo->getNomeLivro() > this->livros[j]->getNomeLivro())&&(j>=0))&&((pivo->getNumeroDePaginas()>0)&&(this->livros[j]->getNumeroDePaginas()>0))){
		                   this->livros[j+1]=this->livros[j];
		                   j--;
		             }
		             this->livros[j+1]=pivo;
		         }
		     }
		     break;
		case: 2
			do{
				
				std::cout <<"deseja ordenar de A-Z [digite 1] ou Z-A [digite 2]"<<std::endl;
				cin<< esc <<std::endl;
		    }while((esc!=0)||(esc!=1));
			 
			 if (esc==1){     
		         for (i=1;i<this->numerodelivros;i++){
		             pivo=this->livros[i];
		             j=i-1;
		             while (((pivo->getNomeAutor() < this->livros[j]->getNomeAutor())&&(j>=0))&&((pivo->getNumeroDePaginas()>0)&&(this->livros[j]->getNumeroDePaginas()>0))){
		                   this->livros[j+1]=this->livros[j];
		                   j--;
		             }
		             this->livros[j+1]=pivo;
		         }
		     }else{
		          for (i=1;i<this->numerodelivros;i++){
		             pivo=this->livros[i];
		             j=i-1;
		             while (((pivo->getNomeAutor() > this->livros[j]->getNomeAutor())&&(j>=0))&&((pivo->getNumeroDePaginas()>0)&&(this->livros[j]->getNumeroDePaginas()>0))){
		                   this->livros[j+1]=this->livros[j];
		                   j--;
		             }
		             this->livros[j+1]=pivo;
		         }
		     }
		     break;
		case: 3
				do{
				
				std::cout <<"deseja ordenar do mais lido para o menos lido [digite 1] ou do menos lido para o mais lido [digite 2]"<<std::endl;
				cin >> esc ;
		    }while((esc!=0)||(esc!=1));
			 
			 if (esc==1){
		         for (i=1;i<this->numerodelivros;i++){
		             pivo=this->livros[i];
		             j=i-1;
		             while ((((pivo->getPaginaAtual()/pivo->getNumeroDePaginas()) < (this->livros[j]->getPaginaAtual()/this->livros[j]->getNumeroDePaginas()))&&(j>=0))&&((pivo->getNomeAutor()!="desconhecido")&&(this->livros[j]->getNomeAutor()!="desconhecido")){
		                   this->livros[j+1]=this->livros[j];
		                   j--;
		             }
		             this->livros[j+1]=pivo;
		         }
		     }else{
		          for (i=1;i<this->numerodelivros;i++){
		             pivo=this->livros[i];
		             j=i-1;
		             while ((((pivo->getPaginaAtual()/pivo->getNumeroDePaginas()) > (this->livros[j]->getPaginaAtual()/this->livros[j]->getNumeroDePaginas()))&&(j>=0))&&((pivo->getNomeAutor()!="desconhecido")&&(this->livros[j]->getNomeAutor()!="desconhecido")){
		                   this->livros[j+1]=this->livros[j];
		                   j--;
		             }
		             this->livros[j+1]=pivo;
		         }
		     }
		     break;				
}

void Biblioteca::Mostrarlivros()
{
	int i=0;
	while(this->livros[i].getPaginaAtual()!=0){
		this->livros[i++].MostrarDetalhes();
		std::std::endl;
	}
}

void Biblioteca::Ler(const int *posicao)
{
	std::cout <<" voce esta lendo :"<< std::std::endl;
	this->livros[posicao].MostrarDetalhes();
	this->livros[posicao].
	std::cout <<"para muda de pagina digite: 1/npara marcar a pagina digite: 2\npara buscar uma pagina digite: 3\npara reler o livro digite: 4"<<std::std::endl;
	cin >> escolha ;
	switch(escolha){
		case (1):
			std::cout <<"para passar a pagina digite: 1\npara voltar uma pagina digite 0"<<std::endl;
			std::cin >> escolha;
			this->livros[posicao].mudarpagina(int escolha);
			break;
		case(2):
			this->livros[posicao].marcarpagina;
			break;
		case(3):
			this->livros[posicao]->reler();
			break;
	}
}