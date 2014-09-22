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
		Livro::livos[i]();
	numerodelivros=0;
}

void Biblioteca::Addlivro()
{
	if (this->numerodelivros<50){
		cout << "deseja inserir nome, autor e numero de paginas agora ?[1=sim/o=nao]"<<endl;
		cin << esc <<endl;
		if (!esc)
			Livro::this->livros[this->numerodelivros++]();
		else{
			cout <<"digite o nome do livro: "<<endl;
			cin << nome <<endl;
			cout <<"digite o nome do autor: "<<endl;
			cin << autor <<endl;
			cout <<"digite o numero de paginas: "<<endl;
			cin << numerodepaginas <<endl;
			Livro::this->livros[this->numerodelivros++](nome,autor,numerodepaginas);
		}
	}
}

void Biblioteca::Deletarlivro()
{
	string nome;
	Livro *livroaserdeletado;
	
	cout <<" digite o nome do livro: "<<endl;
	cin << nome<<endl;
	*livroaserdeletado=Biblioteca::buscarLivro(&nome);
	do{
		cout <<"voce deseja deletar este liivro :\n"<<endl;
		*livroaserdeletado->MostrarDetalhes();
		cout<<"???[1=sim/0=nao]"<<endl;
		cin<< esc <<endl;
	}while((esc!=0)||(esc!=1));
	if (esc){
		Livro::*livroaserdeletado();
		Biblioteca::Ordenar();
	}
}

void Biblioteca::Ordenar()
{
	// ordenação com o algoritmo de inserção
	int i,j,esc,ordenarpor;
	Livro pivo;
	
	do{
		cout << "deseja ordenar por nome [digite 1], por altor[digite 2], por porcentagem lida [digite 3]"
		cin<< ordenarpor <<endl;
	}while((ordenarpor < 3)||(ordenarpor < 1));
	switch(ordenarpor){
		case: 1
			do{
				
				cout <<"deseja ordenar de A-Z [digite 1] ou Z-A [digite 2]"<<endl;
				cin<< esc <<endl;
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
				
				cout <<"deseja ordenar de A-Z [digite 1] ou Z-A [digite 2]"<<endl;
				cin<< esc <<endl;
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
				
				cout <<"deseja ordenar do mais lido para o menos lido [digite 1] ou do menos lido para o mais lido [digite 2]"<<endl;
				cin<< esc <<endl;
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

void Biblioteca::Livroslendo()
{
}

void Biblioteca::Mostrarlivros()
{
}

void Biblioteca::Ler(const Livro &livro)
{
	
}
