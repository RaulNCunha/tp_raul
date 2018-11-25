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
	
	system("cls || clear");
	
	return nomeArquivo;
}
	