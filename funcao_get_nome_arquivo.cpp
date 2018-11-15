#include "funcao_get_nome_arquivo.h"

#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;


string get_nome_arquivo(){
	
	string nomeArquivo;
	
	cout << "Digite o nome do arquivo: " << endl;
		
	cin >> nomeArquivo;
		
	/*
	int opcao,opc,opc1;
	Pilha *pilha;
	inicializar(&pilha);
	while(1){
		puts(" \n[Escolha a Opcao]\n\n");
		puts("  [1] - PILHA\n");
		puts("  [2] - FILA\n");
		puts("  [0] - SAIR\n");
		puts("\n\n");
		scanf ("%d",&opcao);
		if(!opcao)
		break;
		switch (opcao){		 
		   case 1:	
				do{
				   puts("Pilha\n");
				   system("cls");
				   puts("\nEscolha uma Funcao - PILHA\n\n");
				   puts("  [1] - Empilhar Elemento\n");  // pelo topo
				   puts("  [2] - Desempilhar Elemento\n"); // pelo topo
				   puts("  [3] - Acessar Elemento\n"); // pelo topo
				   puts("  [4] - Visualizar PILHA\n"); // completa	
				   puts("  [0] - Returnar ao Menu Principal\n");
				   puts("\n\n");	
				   scanf ("%d",&opc1);  
				   switch(opc1){
				   case 1:
						puts("::Empilhar Elemento::\n\n");
						empilhar(&pilha);
						system("PAUSE");
						system("cls");
						break;
				   case 2:
						puts("::Desempilhar Elemento::\n\n");
						desempilha(&pilha);
						system("PAUSE");
						system("cls");
						break;
				   case 3:
						puts("::Acessar Elemento::\n\n");
						acessa(pilha);
						system("PAUSE");
						system("cls");				  
						break;
				   case 4:
						puts("::Visualizar PILHA::\n\n");
						vizualizar(pilha);
						system("PAUSE");
						system("cls");				  
						break;															 
					}
				}while (opc1 != 0);
				break;
		   case 2:
				do{  
				  puts("Fila\n");
				  system("cls");
				  puts("\nEscolha uma Funcao - FILA\n\n");
				  puts("  [1] - Inserir Elemento\n"); // pela cauda
				  puts("  [2] - Excluir Elemento\n"); // pela cabeça 
				  puts("  [3] - Acessar Elemento\n");
				  puts("  [4] - Visualizar FILA\n");	 
				  puts("  [0] - Returnar ao Menu Principal\n");
				  puts("\n\n");
				  scanf ("%d",&opc);   
				  switch (opc){
				  case 1:
						puts("::Inserir Elemento::\n\n");
						system("PAUSE");
						system("cls");				  
						break;
				  case 2:
						puts("::Excluir Elemento::\n\n");
						system("PAUSE");
						system("cls");				  
						break;
				  case 3:
						puts("::Acessar Elemento::\n\n");
						system("PAUSE");
						system("cls");				  
						break;
				  case 4:
						puts("::Visualizar FILA::\n\n");
						system("PAUSE");
						system("cls");				  
						break;
				  }
				}while (opc !=0);
				break;
		   case 0:
				puts("Sair\n");
				return(0);
		   default:
		   printf("\n\n Opcao invalida!\n");
		   break;   
		   }
		   system("PAUSE");  
		   system("cls");
	}			
	*/
	return nomeArquivo;
}
	