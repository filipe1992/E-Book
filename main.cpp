#include <string>
#include <iostream>
#include <conio.h>
#include "Leitor.h"
 
using namespace std; 
 
 int main () 
{
	int escolha;
	string nome;
	Leitor leitor;
	Leitor::leitor.Leitor();
	do{
		cout << " digiite 1 para inserir seu nome\ndigiite 2 para guardar um livro na biblioteca\ndigite 3 para deletar um livro\ndigiite 4 para ler um livro\ndigite 5 para mostrar todos os livros\ndigite 6 para ordenar\ndigite 7 para buscarOu zero [0] para sair"<< endl; 
		switch(escolha){
			case 1:
				cout << "digite seu nome "<<endl;
				cin >> nome ;
				Leitor::leitor.Leitor(nome);
				break;
			case 2:
				Leitor::leitor.biblioteca.Addlivro();
				break;
			case 3:
				Leitor::leitor.biblioteca.Deletarlivro();
				break;
			case 4:
				cout << "deseja mostrar todos os livros [i=sim/0=nao] "endl;
				cin >> escolha;
				if (escolha)
					Leitor::leitor.biblioteca.mostrarLivros();
				cout << "digite a posição do livro a ser lido "endl;
				cin >> escolha;//reutilizar variavel
				Leitor::leitor.biblioteca.Ler(&escolha);
				break;
			case 5:
				Leitor::leitor.biblioteca.mostrarLivros();
				break;
			case 6:
				Leitor::leitor.biblioteca.Ordenar();
				break;
			case 7:
				cout << "digite seu nome "<<endl;
				cin >> nome ;
				Leitor::leitor.biblioteca.buscarLivro(nome);
				break;
		}
	}while(escolha!=0);
 return 0;
}