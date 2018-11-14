#include "funcao_get_nome_arquivo.h"

#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;


string get_nome_arquivo(){
	
	string nomeArquivo;
	
	do{
				
		cout << "Digite o nome do arquivo: " << endl;
		
		cin >> nomeArquivo;
		
		cout << "Para CONTINUAR a insercao de nomes digite o nome do proximo arquivo com a extensao .txt " << endl;
		
		cout << "Para FINALIZAR a insercao de nomes digite (-) " << endl;
	
	}while(nomeArquivo != '-');
	
	return nomeArquivo;
}
	